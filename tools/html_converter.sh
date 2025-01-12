tail -n +2 ../webpanel/js/index.js > ../webpanel/js/index.tmp.js
echo "let baseUrl= \"\"\n$(cat ../webpanel/js/index.tmp.js)" > ../webpanel/js/index.tmp.js 

html-minifier --collapse-whitespace ../webpanel/devices.html -o ../webpanel/devices.min.html
html-minifier --collapse-whitespace ../webpanel/index.html -o ../webpanel/index.min.html
html-minifier --collapse-whitespace ../webpanel/node.html -o ../webpanel/node.min.html
uglifyjs  --compress --mangle -o ../webpanel/js/index.min.js ../webpanel/js/index.tmp.js
uglifycss ../webpanel/css/styles.css > ../webpanel/css/styles.min.css


gzip -k  ../webpanel/devices.min.html
gzip -k  ../webpanel/index.min.html   
gzip -k  ../webpanel/node.min.html
gzip -k  ../webpanel/js/index.min.js
gzip -k  ../webpanel/css/styles.min.css

xxd -i -n devices_html ../webpanel/devices.min.html.gz > ../include/DevicesHtml.h 
sed -i "" "s/\[\]/\[\] PROGMEM/" ../include/DevicesHtml.h
echo "#include <Arduino.h>\n\r$(cat ../include/DevicesHtml.h)" > ../include/DevicesHtml.h 

xxd -i -n index_html ../webpanel/index.min.html.gz > ../include/IndexHtml.h 
sed -i "" "s/\[\]/\[\] PROGMEM/" ../include/IndexHtml.h
echo "#include <Arduino.h>\n\r$(cat ../include/IndexHtml.h)" > ../include/IndexHtml.h 

xxd -i -n node_html ../webpanel/node.min.html.gz > ../include/NodeHtml.h 
sed -i "" "s/\[\]/\[\] PROGMEM/" ../include/NodeHtml.h
echo "#include <Arduino.h>\n\r$(cat ../include/NodeHtml.h)" > ../include/NodeHtml.h 

xxd -i -n index_js ../webpanel/js/index.min.js.gz > ../include/IndexJs.h 
sed -i "" "s/\[\]/\[\] PROGMEM/" ../include/IndexJs.h
echo "#include <Arduino.h>\n\r$(cat ../include/IndexJs.h)" > ../include/IndexJs.h 

xxd -i -n styles_min_css ../webpanel/css/styles.min.css.gz > ../include/StylesMinCss.h 
sed -i "" "s/\[\]/\[\] PROGMEM/" ../include/StylesMinCss.h
echo "#include <Arduino.h>\n\r$(cat ../include/StylesMinCss.h)" > ../include/StylesMinCss.h 

rm -f ../webpanel/js/index.tmp.js
rm -f  ../webpanel/devices.min.html
rm -f  ../webpanel/index.min.html   
rm -f  ../webpanel/node.min.html 
rm -f  ../webpanel/css/styles.min.css
rm -f  ../webpanel/js/index.min.js
rm -f  ../webpanel/devices.min.html.gz
rm -f  ../webpanel/index.min.html.gz   
rm -f  ../webpanel/node.min.html.gz 
rm -f  ../webpanel/js/index.min.js.gz 
rm -f  ../webpanel/css/styles.min.css.gz 