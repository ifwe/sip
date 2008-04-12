TARGET = sip.so
OFILES = siplib.o qtlib.o threads.o objmap.o bool.o
HFILES = sip.h sipint.h 

CC = cc
CXX = c++
LINK = c++
CPPFLAGS = -I. -I/System/Library/Frameworks/Python.framework/Versions/2.5/include/python2.5
CFLAGS = -pipe -fPIC -Os -w
CXXFLAGS = -pipe -fPIC -Os -w
LFLAGS = -headerpad_max_install_names -bundle -F/System/Library/Frameworks -framework Python
LIBS = 
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

$(TARGET): $(OFILES)
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

$(OFILES): $(HFILES)

install: $(TARGET)
	@test -d $(DESTDIR)/Library/Python/2.5/site-packages || mkdir -p $(DESTDIR)/Library/Python/2.5/site-packages
	cp -f $(TARGET) $(DESTDIR)/Library/Python/2.5/site-packages/$(TARGET)
	@test -d $(DESTDIR)/System/Library/Frameworks/Python.framework/Versions/2.5/include/python2.5 || mkdir -p $(DESTDIR)/System/Library/Frameworks/Python.framework/Versions/2.5/include/python2.5
	cp -f sip.h $(DESTDIR)/System/Library/Frameworks/Python.framework/Versions/2.5/include/python2.5/sip.h

clean:
	-rm -f $(TARGET)
	-rm -f siplib.o
	-rm -f qtlib.o
	-rm -f threads.o
	-rm -f objmap.o
	-rm -f bool.o
