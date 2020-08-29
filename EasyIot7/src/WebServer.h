#ifndef WEBSERVER_O_H
#define WEBSERVER_O_H
#include <Arduino.h>
const char HTTP_HEADER[] PROGMEM = "<!DOCTYPE html><html lang=\"pt\"><head><meta charset=\"UTF-8\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1, user-scalable=no\"/><title>BH OnOfre</title>";
const char HTTP_STYLE[] PROGMEM = "<style>.st{font-size:12px;text-align:center;}.it{padding-top:2px;}.sc{font-size:10px;}input{padding:.175rem .75rem;font-size:14px;color:#fff;width:200px;margin-top:14px;background-color:transparent;background-clip:padding-box;border:1px solid rgba(255,255,255,.1)}input{width:235px}body{display:flex;color:#d8d8d8;justify-content:center;align-items:center;background-color:#1a1c28;flex-flow:column;font-family:verdana,serif}h3{text-transform:uppercase;font-size:14px;padding-bottom:5px;display:flex;justify-content:space-between;flex-flow:row;align-items:end;border-bottom:1px solid rgba(255,255,255,.1)}.i{display:flex;flex-flow:column;background-color:#1a1c28;font-family:verdana,serif}.t{background-color:#242634;padding:10px;width:100%;padding-left:43px;display:flex;align-items:center;color:#86bd9a}img{padding-right:10px}form{text-align:center;display:flex;flex-flow:column}a{color:#d8d8d8;font-size:12px;text-decoration:none}button{background-color:#88bf9c;border:none;height:30px;margin-left:71px;width:100px;cursor:pointer;border-radius:3px;font-size:12px;color:#f5f5f5;margin-top:20px;opacity:.9}</style>";
const char HTTP_SCRIPT[] PROGMEM = "<script>function c(l){document.getElementById('s').value=l.innerText||l.textContent;document.getElementById('p').focus();}</script>";
//const char HTTP_HEADER_END[] PROGMEM = "</head><body><div class=\"t\"><img src=\"data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABwAAAAgCAYAAAABtRhCAAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAACXBIWXMAAAMTAAADEwE9ZoPHAAABWWlUWHRYTUw6Y29tLmFkb2JlLnhtcAAAAAAAPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iWE1QIENvcmUgNS40LjAiPgogICA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPgogICAgICA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIgogICAgICAgICAgICB4bWxuczp0aWZmPSJodHRwOi8vbnMuYWRvYmUuY29tL3RpZmYvMS4wLyI+CiAgICAgICAgIDx0aWZmOk9yaWVudGF0aW9uPjE8L3RpZmY6T3JpZW50YXRpb24+CiAgICAgIDwvcmRmOkRlc2NyaXB0aW9uPgogICA8L3JkZjpSREY+CjwveDp4bXBtZXRhPgpMwidZAAADHklEQVRIDbWWSWtUQRRGu5OYqDEQB3AniJo/YRAnFMEBRNwoggv/QcS9C1Fx2DvjShfuBZfiLxANDhEXDogDBhzJ0J5T/W5TeelOupN44XTdqlf3fnXr1XuvK7VabT3chL/wFU7DsgpG22VbNsdbXSvPndUn8Dr8hmnQvsBJJ9KauJoHORb93I+xeVuCrEyxKZgA7R70GUw7S4CxARgsX59XjAkm+wFWMQ010H6B4o3q8Lur1aoLG+DaWbiMv64Y66HfnhF0Brx3Yc9x9hpNm6qj7S76q/DPQ9g1nLXFtfZECeiFU/AA7kKIVfElxPrxL4E2Dt5r7Ras7ki0mNxHYCRvJnbB7NhHOAFHYQw0D96atkSZOOMkRp82xFfih9gH/MMm1vD3wCvQbkDbolbUeLbwQ8xtDDErO1QI5Vu9i/HXoLVfaVpyfdW52MV6ntp72iRWCJZ3ZSfXXxZz2xclIMTK23iwvKCyMLE7IN/euQ8Sk9OxpnUb88qaimULaFRL3HaISlvfUybF81au7ECWOFUf/bw1PsuxDf8FaL6j441Uj2cgxPLn7B3j+yMpfkuxbE4uOkzMKGi3IV4OScvjvQLOgeYB6UishehW8jwzIeZBSpWmuXS2gMf+OxzJE4Tfbkt8esScj+89tYBJGHasXqJepeI38C08Bif3+GLW78SI8QMQL/0n+KNFP2mFoJOmwHuVPku08eXA7dgi1lxqmDstPgTN6KoC+4uxqNBWjUbeXFABVxars79Qy3Pk/ox7aPJY2UKF5opLucsVzhXQybVY+E+CJsG+/qwKHVuUcbpN7l8Ri/FNNQQext2M9bb3t4DZHVgXj4Z/yPYRcxU2FLEjtH+WdEutqhDzcTgGG8Et9eD4ehv5HxWSN71E/Hen+QyGDS5phWSlyFSlfz0fwgRYrYXJ/SWt0NcaRt5kd/hdDsehFx7BFUjL2szET/AU0k2mnfeTlIKb/BCbdo62BzbBEPQ7NSr0KAdNUnQ2RKXpsaD1wIxFNKJdIeiYgo39iEkLbQtRc8Y5qTkWguNceAPf4DNoixZHwBz5Ka38A3wGVNDmR9VSAAAAAElFTkSuQmCC\" alt=\"onofre\" /><span>OnOfre</span></div><h3 class='box-title'>Configuração da ligação Wi-Fi</h3><div class=\"i\">";
const char HTTP_HEADER_END[] PROGMEM = "</head><body><div class=\"t\"><span>OnOfre</span></div><h3 class='box-title'>Configuração da ligação Wi-Fi</h3><div class=\"i\">";
const char HTTP_ITEM[] PROGMEM = "<div class=\"it\"><a href='#p' onclick='c(this)'>{v}</a>&nbsp;<span class='{i}'>{r}%</span></div>";
const char HTTP_FORM_START[] PROGMEM = "<form method='get' action='/'> <div> <input maxlength='32' id='s' name='s' placeholder='nome da tua rede Wi-Fi'/> <a href='/?sc'>pesquisar</a> </div><input id='p' name='p' maxlength='24' type='password' placeholder='palavra passe'/> <button type='submit'>Guardar</button></form>";
const char HTTP_SAVED[] PROGMEM = "<div class=\"st\">Configuração guardada<br />Verifica na tua Aplicação OnOfre ou na tua Rede se já consegues ligar-te ao teu OnOfre<br />Se não funcionar tenta novamente o processo de configuração.</div>";
const char HTTP_END[] PROGMEM = "</div></body></html>";
void setupWebserverAsync();
void webserverServicesLoop();
void addSwitchToAlexa(const char *name);
void removeSwitchFromAlexa(const char *name);
void sendToServerEvents(const String &topic, const char *payload);
#endif
