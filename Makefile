
all:
	cd sipgen
	$(MAKE)
	@cd ..
	cd siplib
	$(MAKE)
	@cd ..

install:
	cd sipgen
	$(MAKE) install
	@cd ..
	cd siplib
	$(MAKE) install
	@cd ..
	@if not exist C:\Users\Kevin\src\digsby\build\msw\sip\siplib mkdir C:\Users\Kevin\src\digsby\build\msw\sip\siplib
	copy /y sipconfig.py C:\Users\Kevin\src\digsby\build\msw\sip\siplib\sipconfig.py
	copy /y sipdistutils.py C:\Users\Kevin\src\digsby\build\msw\sip\siplib\sipdistutils.py

clean:
	cd sipgen
	$(MAKE) clean
	@cd ..
	cd siplib
	$(MAKE) clean
	@cd ..
