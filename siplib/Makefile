TARGET = sip.pyd
OFILES = siplib.obj descriptors.obj qtlib.obj threads.obj objmap.obj bool.obj
HFILES = sip.h sipint.h 

CC = cl
CXX = cl
LINK = link
CPPFLAGS = -DNDEBUG -DUNICODE -DWIN32 -DQT_LARGEFILE_SUPPORT -I. -IC:\Users\Kevin\src\digsby\build\msw\python\include -IC:\Users\Kevin\src\digsby\build\msw\python\PC
CFLAGS = -nologo -Zm200 -Zc:wchar_t- -Ox -GL -GS- -MD -Zi -W0
CXXFLAGS = -nologo -Zm200 -Zc:wchar_t- -Ox -GL -GS- -MD -Zi -W0
LFLAGS = /NOLOGO /OPT:REF /OPT:ICF /DEBUG /DLL /MANIFEST /MANIFESTFILE:$(TARGET).manifest /SUBSYSTEM:CONSOLE /INCREMENTAL:NO
LIBS = /LIBPATH:C:\Users\Kevin\src\digsby\build\msw\python\PCBuild python26.lib
.SUFFIXES: .c .cpp .cc .cxx .C


{.}.cpp{}.obj::
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -Fo @<<
	$<
<<

{.}.cc{}.obj::
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -Fo @<<
	$<
<<

{.}.cxx{}.obj::
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -Fo @<<
	$<
<<

{.}.C{}.obj::
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -Fo @<<
	$<
<<

{.}.c{}.obj::
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -Fo @<<
	$<
<<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	$(LINK) $(LFLAGS) /OUT:$(TARGET) @<<
	  $(OFILES) $(LIBS)
<<
	mt -nologo -manifest $(TARGET).manifest -outputresource:$(TARGET);2

install: $(TARGET)
	@if not exist C:\Users\Kevin\src\digsby\build\msw\sip\siplib mkdir C:\Users\Kevin\src\digsby\build\msw\sip\siplib
	copy /y $(TARGET) C:\Users\Kevin\src\digsby\build\msw\sip\siplib\$(TARGET)
	@if not exist C:\Users\Kevin\src\digsby\build\msw\sip\siplib mkdir C:\Users\Kevin\src\digsby\build\msw\sip\siplib
	copy /y sip.h C:\Users\Kevin\src\digsby\build\msw\sip\siplib\sip.h

clean:
	-del $(TARGET)
	-del siplib.obj
	-del descriptors.obj
	-del qtlib.obj
	-del threads.obj
	-del objmap.obj
	-del bool.obj
	-del $(TARGET).manifest
