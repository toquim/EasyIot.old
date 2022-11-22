#ifndef WIFI_H
#define WIFI_H
#include <Arduino.h>
#ifdef ESP32
#include "WiFi.h"
#include <AsyncTCP.h>
#include <ESPmDNS.h>
#include <HTTPClient.h>
#elif defined(ESP8266)
#include "ESP8266WiFi.h"
#include <ESP8266mDNS.h>
#include <ESPAsyncTCP.h>
#include <ESP8266HTTPClient.h>
#endif

void setupWiFi();
void loopWiFi();
bool wifiConnected();
void reloadWiFiConfig();
void scanNewWifiNetworks();
void enableScan();
void refreshMDNS(const char *lastName);
#endif