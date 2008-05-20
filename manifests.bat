cd sipgen
mt.exe -manifest sip.exe.manifest -outputresource:sip.exe;1
cd ..

cd siplib
mt.exe -manifest sip.pyd.manifest -outputresource:sip.pyd;2
cd ..

