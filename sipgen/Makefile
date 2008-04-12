TARGET = sip
OFILES = main.o transform.o gencode.o export.o heap.o parser.o lexer.o
HFILES = sip.h parser.h

CC = cc
CXX = c++
LINK = c++
CPPFLAGS = -I.
CFLAGS = -pipe -Os -w
CXXFLAGS = -pipe -Os -w
LFLAGS = -headerpad_max_install_names
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
	@test -d $(DESTDIR)/System/Library/Frameworks/Python.framework/Versions/2.5/bin || mkdir -p $(DESTDIR)/System/Library/Frameworks/Python.framework/Versions/2.5/bin
	cp -f $(TARGET) $(DESTDIR)/System/Library/Frameworks/Python.framework/Versions/2.5/bin/$(TARGET)

clean:
	-rm -f $(TARGET)
	-rm -f main.o
	-rm -f transform.o
	-rm -f gencode.o
	-rm -f export.o
	-rm -f heap.o
	-rm -f parser.o
	-rm -f lexer.o
