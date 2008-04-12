
all:
	@(cd sipgen; $(MAKE))
	@(cd siplib; $(MAKE))

install:
	@(cd sipgen; $(MAKE) install)
	@(cd siplib; $(MAKE) install)
	@test -d $(DESTDIR)/Library/Python/2.5/site-packages || mkdir -p $(DESTDIR)/Library/Python/2.5/site-packages
	cp -f sipconfig.py $(DESTDIR)/Library/Python/2.5/site-packages/sipconfig.py
	cp -f sipdistutils.py $(DESTDIR)/Library/Python/2.5/site-packages/sipdistutils.py

clean:
	@(cd sipgen; $(MAKE) clean)
	@(cd siplib; $(MAKE) clean)
