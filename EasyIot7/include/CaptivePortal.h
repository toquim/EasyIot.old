#pragma once
#include <Arduino.h>

const char HTTP_HEADER[] PROGMEM = "<!DOCTYPE html><html lang=\"pt\"><head><meta charset=\"UTF-8\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1, user-scalable=no\"/><title>BH OnOfre</title>";
const char HTTP_STYLE[] PROGMEM = "<style>.hide{display:none;}.st{font-size:12px;text-align:center;}.it{padding-top:2px;}.sc{font-size:10px;}input{padding:.175rem .75rem;font-size:14px;color:#fff;width:200px;margin-top:14px;background-color:transparent;background-clip:padding-box;border:1px solid rgba(255,255,255,.1)}input{width:235px}body{display:flex;color:#d8d8d8;justify-content:center;align-items:center;background-color:#1b1b1b;flex-flow:column;font-family:verdana,serif}h3{text-transform:uppercase;font-size:14px;padding-bottom:5px;display:flex;justify-content:space-between;flex-flow:row;align-items:end;border-bottom:1px solid rgba(255,255,255,.1)}.i{display:flex;flex-flow:column;background-color:#1b1b1b;font-family:verdana,serif}.t{background-color:#1b1b1b;padding:10px;width:100%;padding-left:43px;display:flex;align-items:center;color:#86bd9a}img{padding-right:10px}form{display:flex;flex-flow:column}a{color:#d8d8d8;font-size:12px;text-decoration:none}button{background-color:#88bf9c;border:none;height:30px;margin-left:115px;width:100px;cursor:pointer;border-radius:3px;font-size:12px;color:#f5f5f5;margin-top:20px;opacity:.9}</style>";
const char HTTP_SCRIPT[] PROGMEM = "<script>function c(l){document.getElementById('s').value=l.innerText||l.textContent;document.getElementById('p').focus();}</script>";
const char HTTP_HEADER_END[] PROGMEM = "</head><body><div class=\"i\"><svg width=\"115\" height=\"112\" viewBox=\"0 0 115 112\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\"><path d=\"M9.49026 103.117C8.2622 103.117 7.11964 102.907 6.06257 102.488C5.00551 102.052 4.08058 101.454 3.28778 100.692C2.49498 99.9151 1.87318 99.0212 1.42237 98.0108C0.987111 96.9848 0.76948 95.8811 0.76948 94.6997C0.76948 93.5183 0.987111 92.4223 1.42237 91.4119C1.87318 90.3859 2.49498 89.4921 3.28778 88.7304C4.08058 87.9531 5.00551 87.3546 6.06257 86.9349C7.11964 86.4997 8.2622 86.282 9.49026 86.282C10.7183 86.282 11.8609 86.4997 12.9179 86.9349C13.975 87.3546 14.8999 87.9531 15.6927 88.7304C16.4855 89.4921 17.0996 90.3859 17.5348 91.4119C17.9856 92.4223 18.211 93.5183 18.211 94.6997C18.211 95.8811 17.9856 96.9848 17.5348 98.0108C17.0996 99.0212 16.4855 99.9151 15.6927 100.692C14.8999 101.454 13.975 102.052 12.9179 102.488C11.8609 102.907 10.7183 103.117 9.49026 103.117ZM9.49026 99.4332C10.1431 99.4332 10.7494 99.3166 11.309 99.0834C11.8687 98.8347 12.3505 98.5005 12.7547 98.0807C13.1744 97.661 13.5009 97.1636 13.7341 96.5884C13.9672 95.9977 14.0838 95.3681 14.0838 94.6997C14.0838 94.0157 13.9672 93.3861 13.7341 92.811C13.5009 92.2358 13.1744 91.7384 12.7547 91.3186C12.3505 90.8989 11.8687 90.5725 11.309 90.3393C10.7494 90.0906 10.1431 89.9662 9.49026 89.9662C8.83736 89.9662 8.23111 90.0906 7.67149 90.3393C7.11186 90.5725 6.62219 90.8989 6.20248 91.3186C5.79831 91.7384 5.47963 92.2358 5.24646 92.811C5.01328 93.3861 4.89669 94.0157 4.89669 94.6997C4.89669 95.3681 5.01328 95.9977 5.24646 96.5884C5.47963 97.1636 5.79831 97.661 6.20248 98.0807C6.62219 98.5005 7.11186 98.8347 7.67149 99.0834C8.23111 99.3166 8.83736 99.4332 9.49026 99.4332ZM22.6753 102.861V86.5385H26.4527L33.8677 96.0055V86.5385H37.6451V102.861H34.1009L26.4527 93.0208V102.861H22.6753ZM50.8152 103.117C49.5871 103.117 48.4446 102.907 47.3875 102.488C46.3305 102.052 45.4055 101.454 44.6127 100.692C43.8199 99.9151 43.1981 99.0212 42.7473 98.0108C42.3121 96.9848 42.0944 95.8811 42.0944 94.6997C42.0944 93.5183 42.3121 92.4223 42.7473 91.4119C43.1981 90.3859 43.8199 89.4921 44.6127 88.7304C45.4055 87.9531 46.3305 87.3546 47.3875 86.9349C48.4446 86.4997 49.5871 86.282 50.8152 86.282C52.0433 86.282 53.1858 86.4997 54.2429 86.9349C55.3 87.3546 56.2249 87.9531 57.0177 88.7304C57.8105 89.4921 58.4245 90.3859 58.8598 91.4119C59.3106 92.4223 59.536 93.5183 59.536 94.6997C59.536 95.8811 59.3106 96.9848 58.8598 98.0108C58.4245 99.0212 57.8105 99.9151 57.0177 100.692C56.2249 101.454 55.3 102.052 54.2429 102.488C53.1858 102.907 52.0433 103.117 50.8152 103.117ZM50.8152 99.4332C51.4681 99.4332 52.0744 99.3166 52.634 99.0834C53.1936 98.8347 53.6755 98.5005 54.0797 98.0807C54.4994 97.661 54.8258 97.1636 55.059 96.5884C55.2922 95.9977 55.4088 95.3681 55.4088 94.6997C55.4088 94.0157 55.2922 93.3861 55.059 92.811C54.8258 92.2358 54.4994 91.7384 54.0797 91.3186C53.6755 90.8989 53.1936 90.5725 52.634 90.3393C52.0744 90.0906 51.4681 89.9662 50.8152 89.9662C50.1623 89.9662 49.5561 90.0906 48.9964 90.3393C48.4368 90.5725 47.9471 90.8989 47.5274 91.3186C47.1233 91.7384 46.8046 92.2358 46.5714 92.811C46.3382 93.3861 46.2216 94.0157 46.2216 94.6997C46.2216 95.3681 46.3382 95.9977 46.5714 96.5884C46.8046 97.1636 47.1233 97.661 47.5274 98.0807C47.9471 98.5005 48.4368 98.8347 48.9964 99.0834C49.5561 99.3166 50.1623 99.4332 50.8152 99.4332ZM64.0002 102.861V86.5385H76.9648V90.0129H68.0108V93.0675H73.9801V96.4252H68.0108V102.861H64.0002ZM81.543 102.861V86.5385H89.8907C91.01 86.5385 92.0049 86.7639 92.8754 87.2147C93.7459 87.65 94.4221 88.264 94.904 89.0568C95.4015 89.8341 95.6502 90.7279 95.6502 91.7384C95.6502 92.7643 95.3704 93.6815 94.8108 94.4898C94.2511 95.2982 93.5127 95.9122 92.5956 96.3319L96.1632 102.861H91.6862L88.6083 96.9149H85.5537V102.861H81.543ZM85.5537 93.6504H89.5177C90.1395 93.6504 90.6369 93.4794 91.01 93.1374C91.3986 92.7954 91.5929 92.3524 91.5929 91.8083C91.5929 91.2642 91.3986 90.8212 91.01 90.4792C90.6369 90.1372 90.1395 89.9662 89.5177 89.9662H85.5537V93.6504ZM100.042 102.861V86.5385H112.914V90.0129H104.053V92.9509H109.906V96.3086H104.053V99.3865H113.007V102.861H100.042Z\" fill=\"white\"/><path d=\"M28.6547 67.3386C28.6547 68.7914 29.8324 69.969 31.2852 69.969C32.7379 69.969 33.9156 68.7914 33.9156 67.3386H28.6547ZM81.3414 28.4203L79.612 30.4023L81.3414 28.4203ZM33.9156 67.3386V36.419H28.6547V67.3386H33.9156ZM36.685 30.4157L53.2178 16.3107L49.8033 12.3085L33.2706 26.4136L36.685 30.4157ZM63.5277 16.368L79.612 30.4023L83.0708 26.4383L66.9865 12.404L63.5277 16.368ZM82.3151 36.3483V48.9258H87.5759V36.3483H82.3151ZM79.612 30.4023C81.3295 31.9009 82.3151 34.0689 82.3151 36.3483H87.5759C87.5759 32.5493 85.9332 28.936 83.0708 26.4383L79.612 30.4023ZM53.2178 16.3107C56.1936 13.7718 60.5803 13.7962 63.5277 16.368L66.9865 12.404C62.0741 8.1177 54.763 8.07707 49.8033 12.3085L53.2178 16.3107ZM33.9156 36.419C33.9156 34.109 34.9277 31.915 36.685 30.4157L33.2706 26.4136C30.3417 28.9124 28.6547 32.569 28.6547 36.419H33.9156Z\" fill=\"#40DF86\"/><circle cx=\"85.4717\" cy=\"51.0298\" r=\"8.94339\" fill=\"#40DF86\"/><circle cx=\"29.708\" cy=\"8.94339\" r=\"8.94339\" fill=\"#40DF86\"/></svg></div>";
const char HTTP_ITEM[] PROGMEM = "<div class=\"it\"><a href='#p' onclick='c(this)'>{v}</a>&nbsp;<span class='{i}'>{r}%</span></div>";
const char HTTP_FORM_START[] PROGMEM = "<form method='get' action='/'> <div> <input maxlength='32' id='s' name='s'  placeholder='WiFi'/> <a href='/?sc'><svg width=\"40\" height=\"40\" viewBox=\"0 0 40 40\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\"><path d=\"M22.7275 22.8492L26.2631 26.3847\" stroke=\"#EFEFEF\" stroke-linecap=\"round\"/><circle cx=\"18.1924\" cy=\"18.1924\" r=\"6\" transform=\"rotate(-45 18.1924 18.1924)\" stroke=\"#EFEFEF\"/></svg></a> </div><input id='p' name='p' maxlength='24' type='password' placeholder='palavra passe'/><label for='i' style='margin: 10px 0px 0px 0px;'>Nome</label><input maxlength='32' id='i' name='i' value='{n}'/><label for='t' class='hide' style='margin: 10px 0px 10px 0px;'>Template</label><select  class='hide' style='min-height: 24px;' name='t' id='t'><option value='0' >Nenhum</option><option value='1'>Iluminação</option><option value='2'>Estores</option><option value='3'>Portão</option><option value='4'>Pzem</option></select><button type='submit'>Guardar</button></form>";
const char HTTP_SAVED[] PROGMEM = "<div class=\"st\">Configuração guardada<br />Verifica na tua Aplicação Móvel ou no teu Browser se já consegues aceder ao teu OnOfre <br/>Se não funcionar tenta novamente o processo de configuração.<br/><br/>Utiliza o endereço {o} para aceder no Browser</a></div>";
const char HTTP_END[] PROGMEM = "</div></body></html>";