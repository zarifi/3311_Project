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

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  et883.o et883d.o et881.o et881d.o et882.o et882d.o et880.o et880d.o \
	c_879.o c_879d.o va878.o va878d.o et877.o et877d.o et876.o et876d.o \
	ev875.o ev875d.o ev874.o ev874d.o ev873.o ev873d.o kl872.o kl872d.o \
	gt871.o gt871d.o gt870.o gt870d.o ev869.o ev869d.o ev868.o ev868d.o \
	ev867.o ev867d.o kl866.o kl866d.o ev865.o ev865d.o ev864.o ev864d.o \
	ev863.o ev863d.o ev862.o ev862d.o ev892.o ev892d.o ev891.o ev891d.o \
	ev861.o ev861d.o ev890.o ev890d.o ev889.o ev889d.o ev888.o ev888d.o \
	ev887.o ev887d.o ev886.o ev886d.o ev885.o ev885d.o ev884.o ev884d.o 

all: Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj1.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

