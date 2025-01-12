#include "Actuatores.h"
#include <Shutters.h>
#include "HomeAssistantMqttDiscovery.h"
#include "WebServer.h"
#include "Constants.h"
#include "ConfigOnofre.h"
#include "Mqtt.h"
#include "CoreWiFi.h"
#include <esp-knx-ip.h>
#include "CloudIO.h"
#include "LittleFS.h"
#include <time.h>
extern ConfigOnofre config;

void shuttersOperationHandler(Shutters *s, ShuttersOperation operation)
{
  switch (operation)
  {
  case ShuttersOperation::UP:
#ifdef DEBUG_ONOFRE
    Log.notice("%s Operation:      %s" CR, tags::actuatores, "UP");
#endif
#ifdef ESP32
    writeToPIN(s->downPin, LOW);
    delay(1);
    writeToPIN(s->upPin, HIGH);
#else
    writeToPIN(s->downPin, HIGH);
    delay(1);
    writeToPIN(s->upPin, HIGH);
#endif
    break;
  case ShuttersOperation::DOWN:
#ifdef DEBUG_ONOFRE
    Log.notice("%s Operation:      %s" CR, tags::actuatores, "DOWN");
#endif
    writeToPIN(s->downPin, HIGH);
    delay(1);
    writeToPIN(s->upPin, LOW);
    break;
  case ShuttersOperation::HALT:
#ifdef DEBUG_ONOFRE
    Log.notice("%s Operation:      %s" CR, tags::actuatores, "STOP");
#endif
#ifdef ESP32
    writeToPIN(s->downPin, LOW);
    delay(1);
    writeToPIN(s->upPin, LOW);
#else
    writeToPIN(s->downPin, LOW);
#endif
    break;
  }
#ifdef DEBUG_ONOFRE
  Log.notice("%s upPin:          %d" CR, tags::actuatores, s->upPin);
  Log.notice("%s downPin :       %d" CR, tags::actuatores, s->downPin);
#endif
}

void onShuttersLevelReached(Shutters *shutters, uint8_t level)
{
  for (auto &a : config.actuatores)
  {
    if (a.id == shutters->actuatorId)
    {
      a.state = level;
      a.notifyState(StateOrigin::INTERNAL);
    }
  }
}
void actuatoresCallback(message_t const &msg, void *arg)
{
#ifdef DEBUG_ONOFRE
  Log.notice("%s KNX PA %d.%d.%d" CR, tags::actuatores, msg.received_on.pa.area, msg.received_on.pa.line, msg.received_on.pa.member);
  Log.notice("%s KNX GA %d.%d.%d" CR, tags::actuatores, msg.received_on.ga.area, msg.received_on.ga.line, msg.received_on.ga.member);
#endif

  for (auto &s : config.actuatores)
  {
    if (!s.isKnxSupport())
    {
      continue;
    }
    if (s.knxAddress[0] == msg.received_on.ga.area && (s.knxAddress[1] == msg.received_on.ga.line || (msg.received_on.ga.line == 0 && msg.received_on.ga.member == 0)) && (s.knxAddress[2] == msg.received_on.ga.member || msg.received_on.ga.member == 0))
    {
      switch (msg.ct)
      {
      case KNX_CT_ADC_ANSWER:
      case KNX_CT_ADC_READ:
      case KNX_CT_ESCAPE:
      case KNX_CT_INDIVIDUAL_ADDR_REQUEST:
      case KNX_CT_INDIVIDUAL_ADDR_RESPONSE:
      case KNX_CT_INDIVIDUAL_ADDR_WRITE:
      case KNX_CT_MASK_VERSION_READ:
      case KNX_CT_MASK_VERSION_RESPONSE:
      case KNX_CT_MEM_ANSWER:
      case KNX_CT_MEM_READ:
      case KNX_CT_MEM_WRITE:
      case KNX_CT_READ:
        if (s.knxAddress[0] == msg.received_on.ga.area && s.knxAddress[1] == msg.received_on.ga.line && s.knxAddress[2] == msg.received_on.ga.member)
        {
          knx.answer_1byte_int(msg.received_on, s.state);
        }
        break;
      case KNX_CT_RESTART:
        break;
      case KNX_CT_ANSWER:
      case KNX_CT_WRITE:
      {
#ifdef DEBUG_ONOFRE
        Log.notice("%s KNX %s" CR, tags::actuatores, KNX_CT_ANSWER == msg.ct ? "SYNC" : "WRITE");
#endif
        int state = knx.data_to_1byte_int(msg.data);
        if (s.state != state)
        {
          s.changeState(StateOrigin::KNX, state);
          config.save();
        }
        break;
      }
      };
    }
  }
}
void toogle(Button2 &btn)
{
  for (auto a : config.actuatores)
  {
    if (a.id == btn.getID())
    {
      config.controlFeature(StateOrigin::GPIO_INPUT, a.uniqueId, ActuatorState::TOGGLE);
    }
  }
}
void openShutter(Button2 &btn)
{
  for (auto a : config.actuatores)
  {
    if (a.id == btn.getID())
    {
      config.controlFeature(StateOrigin::GPIO_INPUT, a.uniqueId, ActuatorState::OFF_OPEN);
    }
  }
}
void openShutterLatch(Button2 &btn)
{
  for (auto a : config.actuatores)
  {
    if (a.id == btn.getID())
    {
      config.controlFeature(StateOrigin::GPIO_INPUT, a.uniqueId, ActuatorState::OFF_OPEN);
    }
  }
}
void stopShutterLatch(Button2 &btn)
{
  for (auto a : config.actuatores)
  {
    if (a.id == btn.getID())
    {
      if ((digitalRead(a.inputs[0]) && digitalRead(a.inputs[1])))
      {
        config.controlFeature(StateOrigin::GPIO_INPUT, a.uniqueId, ActuatorState::STOP);
      }
    }
  }
}
void closeShutterLatch(Button2 &btn)
{
  for (auto a : config.actuatores)
  {
    if (a.id == btn.getID())
    {
      config.controlFeature(StateOrigin::GPIO_INPUT, a.uniqueId, ActuatorState::ON_CLOSE);
    }
  }
}
void closeShutter(Button2 &btn)
{
  for (auto a : config.actuatores)
  {
    if (a.id == btn.getID())
    {
      config.controlFeature(StateOrigin::GPIO_INPUT, a.uniqueId, ActuatorState::ON_CLOSE);
    }
  }
}
void rotateShutter(Button2 &btn)
{
  for (auto a : config.actuatores)
  {
    if (a.id == btn.getID())
    {
      config.controlFeature(StateOrigin::GPIO_INPUT, a.uniqueId, ActuatorState::ON_CLOSE);
    }
  }
}
void stopShutter(Button2 &btn)
{
  for (auto a : config.actuatores)
  {
    if (a.id == btn.getID())
    {
      config.controlFeature(StateOrigin::GPIO_INPUT, a.uniqueId, ActuatorState::STOP);
    }
  }
}
void garageNotify(Button2 &btn)
{
  for (auto a : config.actuatores)
  {
    if (a.id == btn.getID())
    {

      a.state = digitalRead(btn.getPin()) ? OFF_OPEN : ON_CLOSE;
      a.notifyState(StateOrigin::GPIO_INPUT);
    }
  }
}

void Actuator::setup()
{
  buttons.clear();
  id = config.featureIds++;
  if (isCover() && outputs.size() == 2 && typeControl == ActuatorControlType::GPIO_OUTPUT)
  {
    shutter = new Shutters(outputs[0], outputs[1], id);
    shutter->setOperationHandler(shuttersOperationHandler)
        .restoreState(state, upCourseTime * 1000, downCourseTime * 1000)
        .setCourseTime(upCourseTime * 1000, downCourseTime * 1000)
        .onLevelReached(onShuttersLevelReached)
        .begin();
  }

  for (auto output : outputs)
  {
    configPIN(output, OUTPUT);
    writeToPIN(output, 0);
    if (isLight() || isSwitch() || isGardenValve())
    {
      writeToPIN(output, state);
    }
  }
  if (isLight() || isSwitch())
  {
    for (auto input : inputs)
    {
      Button2 button;
      button.begin(input);
      button.setID(id);
      switch (driver)
      {
      case ActuatorDriver::LIGHT_PUSH:
      case ActuatorDriver::SWITCH_PUSH:
        button.setPressedHandler(toogle);
        break;
      case ActuatorDriver::LIGHT_LATCH:
      case ActuatorDriver::SWITCH_LATCH:
        button.setChangedHandler(toogle);
      }
      button.loop();
      buttons.push_back(button);
    }
  }
  else if (isGarage() && typeControl == ActuatorControlType::GPIO_OUTPUT)
  {
    Button2 button;
    button.begin(inputs[0]);
    button.setID(id);
    button.setDebounceTime(1000);
    button.setChangedHandler(garageNotify);
    button.loop();
    buttons.push_back(button);
    state = digitalRead(inputs[0]) ? OFF_OPEN : ON_CLOSE;
  }
  else if (isCover())
  {
    if ((ActuatorDriver::COVER_DUAL_PUSH == driver || ActuatorDriver::COVER_DUAL_LATCH == driver) && inputs.size() == 2)
    {
      Button2 buttonOpen;
      buttonOpen.begin(inputs[0]);
      buttonOpen.setID(id);
      Button2 buttonClose;
      buttonClose.begin(inputs[1]);
      buttonClose.setID(id);
      if (ActuatorDriver::COVER_DUAL_PUSH == driver)
      {
        buttonOpen.setPressedHandler(openShutter);
        buttonOpen.setLongClickTime(500);
        buttonOpen.setLongClickDetectedHandler(stopShutter);
        buttonOpen.setDoubleClickHandler(stopShutter);
        buttonClose.setLongClickTime(500);
        buttonClose.setLongClickDetectedHandler(stopShutter);
        buttonClose.setDoubleClickHandler(stopShutter);
        buttonClose.setPressedHandler(closeShutter);
      }
      else if (ActuatorDriver::COVER_DUAL_LATCH == driver)
      {
        buttonOpen.setChangedHandler(stopShutterLatch);
        buttonOpen.setPressedHandler(openShutter);
        buttonClose.setChangedHandler(stopShutterLatch);
        buttonClose.setPressedHandler(closeShutter);
      }
      buttonOpen.loop();
      buttonClose.loop();
      buttons.push_back(buttonOpen);
      buttons.push_back(buttonClose);
    }
    else if (ActuatorDriver::COVER_SINGLE_PUSH == driver && inputs.size() > 0)
    {
      Button2 buttonRotate;
      buttonRotate.begin(inputs[0]);
      buttonRotate.setDebounceTime(50);
      buttonRotate.setID(id);
      buttonRotate.setLongClickTime(500);
      buttonRotate.setLongClickDetectedHandler(stopShutter);
      buttonRotate.setClickHandler(toogle);
      buttonRotate.setDoubleClickHandler(stopShutter);
      buttonRotate.loop();
      buttons.push_back(buttonRotate);
    }
  }

  if (isKnxSupport())
  {
    knx.callback_assign(config.knxIdRegister, knx.GA_to_address(knxAddress[0], knxAddress[1], knxAddress[2]));
    knx.callback_assign(config.knxIdRegister, knx.GA_to_address(knxAddress[0], knxAddress[1], 0));
    knx.callback_assign(config.knxIdRegister, knx.GA_to_address(knxAddress[0], 0, 0));
  }
  ready = true;
}

void Actuator::notifyState(StateOrigin origin)
{
  if (state <= 100)
  {
    String stateStr = String(state);
    // Notify by MQTT/Homeassistant
    if (isRelay() && mqttConnected())
    {
      publishOnMqtt(readTopic, stateStr.c_str(), true);
    }

    // Notify by MQTT OnofreCloud
    if (isRelay() && cloudIOConnected())
    {
      notifyStateToCloudIO(cloudIOreadTopic, stateStr.c_str());
    }

    // Notify by SSW Webpanel
    sendToServerEvents(uniqueId, stateStr.c_str());
  }
  // Notify by KNX
  if (StateOrigin::INTERNAL != origin && StateOrigin::KNX != origin && isKnxSupport())
  {
#ifdef DEBUG_ONOFRE
    Log.notice("%s KNX State:     %d" CR, tags::actuatores, state);
#endif
    knx.write_1byte_int(knx.GA_to_address(knxAddress[0], knxAddress[1], knxAddress[2]), state);
  }
}

Actuator *Actuator::changeState(StateOrigin origin, int state)
{
  if (!isGarage() && this->state == state)
    return this;
#ifdef DEBUG_ONOFRE
  Log.notice("%s Name:      %s" CR, tags::actuatores, name);
  Log.notice("%s State:     %d" CR, tags::actuatores, state);
  Log.notice("%s From : %d" CR, tags::actuatores, origin);
  Log.notice("%s Family : %d" CR, tags::actuatores, driver);
#endif
  if (typeControl == ActuatorControlType::GPIO_OUTPUT && outputs.size() > 0)
  {
    if (isCover())
    {
      int level = state;
      if (level == ActuatorState::STOP)
        shutter->stop();
      else
        shutter->setLevel(max(0, min(100, level)));
    }
    else if (isGarage())
    {
      writeToPIN(outputs[0], HIGH);
      delay(1000);
      writeToPIN(outputs[0], LOW);
    }
    else if ((isLight() || isSwitch() || isGardenValve()))
    {
      if (state == ActuatorState::ON_CLOSE || state == ActuatorState::OFF_OPEN)
        writeToPIN(outputs[0], state ? HIGH : LOW);
      else
        return this;
    }
  }
  else if (typeControl == ActuatorControlType::VIRTUAL)
  {
#ifdef DEBUG_ONOFRE
    Log.notice("%s Virtual Switch triggered: %s" CR, tags::actuatores, name);
#endif
    for (auto &sw : config.actuatores)
    {
      if (isKnxSupport() && sw.isKnxSupport() && strcmp(sw.uniqueId, uniqueId) != 0)
      {
        if (sw.isRelay() && sw.knxAddress[0] == knxAddress[0] && ((knxAddress[1] == 0 && knxAddress[2] == 0) || (knxAddress[1] == sw.knxAddress[1] && knxAddress[2] == 0)))
        {
          sw.changeState(StateOrigin::INTERNAL, state);
        }
      }
    }
  }
  else
  {
    return this;
  }
  this->state = state;
  this->notifyState(origin);
  if (isKnxGroup())
  {
    for (auto &sw : config.actuatores)
    {
      if (sw.isKnxSupport() && strcmp(sw.uniqueId, uniqueId) != 0)
      {
        if (sw.knxAddress[0] == knxAddress[0] && ((knxAddress[1] == 0 && knxAddress[2] == 0) || (knxAddress[1] == sw.knxAddress[1] && knxAddress[2] == 0)))
        {
#ifdef DEBUG_ONOFRE
          Log.notice("%s KNX Group: %s" CR, tags::actuatores, sw.name);
#endif
          sw.state = state;
          sw.notifyState(StateOrigin::INTERNAL);
        }
      }
    }
  }
  return this;
}

void ConfigOnofre::loopActuators()
{
  for (auto &sw : config.actuatores)
  {
    if (sw.typeControl == ActuatorControlType::GPIO_OUTPUT && sw.isCover())
    {
      sw.shutter->loop();
    }
    for (auto &button : sw.buttons)
    {
      button.loop();
    }
    if (wifiConnected() && sw.isKnxSupport())
    {
      knx.loop();
      if (sw.knxSync == 3)
      {
#ifdef DEBUG_ONOFRE
        Log.notice("%s KNX Request Sync for: %s" CR, tags::actuatores, sw.name);
#endif
        knx.send_1byte_int(knx.GA_to_address(sw.knxAddress[0], sw.knxAddress[1], sw.knxAddress[2]), KNX_CT_READ, 0);
      }
      if (sw.knxSync < 4)
      {
        sw.knxSync++;
      }
    }
  }
}
void ConfigOnofre::loopSensors()
{
  for (auto &s : config.sensors)
  {
    s.loop();
  }
}
