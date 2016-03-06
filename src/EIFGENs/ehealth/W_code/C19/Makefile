INCLUDE_PATH =  -I"$(ISE_LIBRARY)/library/encoding/implementation/include" -I"$(ISE_LIBRARY)/library/process/classic/unix/include" -I"$(ISE_LIBRARY)/library/vision2/spec/include" -I"$(ISE_LIBRARY)/library/vision2/implementation/gtk/Clib"  -pthread -I/usr/include/gtk-2.0 -I/usr/lib64/gtk-2.0/include -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/pango-1.0 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng15 -I/usr/include/libdrm -I/usr/include/harfbuzz
SHELL = /bin/sh
CC = gcc
CPP = g++
CFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE -m64  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/cs/local/packages/Eiffel15.12/studio/spec/linux-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE -m64  -DWORKBENCH -I"/cs/local/packages/Eiffel15.12/studio/spec/linux-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = -m elf_x86_64
CCLDFLAGS = -m64  
LDSHAREDFLAGS =  -m elf_x86_64 -shared -o
EIFLIB = "/cs/local/packages/Eiffel15.12/studio/spec/linux-x86-64/lib/libwkbench.a"
EIFTEMPLATES = /cs/local/packages/Eiffel15.12/studio/config/linux-x86-64/templates
LIBS = -lm
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/cs/local/packages/Eiffel15.12/studio/spec/linux-x86-64/bin/x2c"
SHAREDLINK = ld
SHAREDLIBS = -lm
SHARED_SUFFIX = .so
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = eHealth.so 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C19_c.o 

OLDOBJECTS =  da1475.o da1475d.o ti1473.o ti1473d.o et1484.o et1484d.o da1471.o \
	da1471d.o da1478.o da1478d.o da1474.o da1474d.o ti1472.o ti1472d.o \
	kl1458.o kl1458d.o yy1483.o yy1483d.o et1482.o et1482d.o da1477.o \
	da1477d.o fi1470.o fi1470d.o da1476.o da1476d.o kl1457.o kl1457d.o \
	yy1480.o yy1480d.o et1481.o et1481d.o kl1454.o kl1454d.o kl1459.o \
	kl1459d.o kl1464.o kl1464d.o kl1463.o kl1463d.o kl1462.o kl1462d.o \
	ev1465.o ev1465d.o kl1467.o kl1467d.o kl1469.o kl1469d.o kl1468.o \
	kl1468d.o uc1479.o uc1479d.o ki1466.o ki1466d.o ki1485.o ki1485d.o \
	kl1461.o kl1461d.o kl1456.o kl1456d.o kl1486.o kl1486d.o kl1460.o \
	kl1460d.o kl1455.o kl1455d.o 

all: Cobj19.o

Cobj19.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj19.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

