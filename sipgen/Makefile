TARGET = sip.exe
OFILES = main.obj transform.obj gencode.obj export.obj heap.obj parser.obj lexer.obj
HFILES = sip.h parser.h

CC = cl
CXX = cl
LINK = link
CPPFLAGS = -DNDEBUG -DUNICODE -DWIN32 -DQT_LARGEFILE_SUPPORT -I.
CFLAGS = -nologo -Zm200 -Zc:wchar_t- -Ox -GL -GS- -MD -Zi -W0
CXXFLAGS = -nologo -Zm200 -Zc:wchar_t- -Ox -GL -GS- -MD -Zi -W0
LFLAGS = /NOLOGO /OPT:REF /OPT:ICF /DEBUG /INCREMENTAL:NO /MANIFEST /MANIFESTFILE:$(TARGET).manifest /SUBSYSTEM:CONSOLE
LIBS = 
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
	mt -nologo -manifest $(TARGET).manifest -outputresource:$(TARGET);1

install: $(TARGET)
	@if not exist C:\Users\Kevin\src\digsby\build\msw\sip\sipgen mkdir C:\Users\Kevin\src\digsby\build\msw\sip\sipgen
	copy /y $(TARGET) C:\Users\Kevin\src\digsby\build\msw\sip\sipgen\$(TARGET)

clean:
	-del $(TARGET)
	-del main.obj
	-del transform.obj
	-del gencode.obj
	-del export.obj
	-del heap.obj
	-del parser.obj
	-del lexer.obj
	-del $(TARGET).manifest
