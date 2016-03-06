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

OBJECTS = big_file_C2_c.o 

OLDOBJECTS =  kl916.o kl916d.o ev925.o ev925d.o ev924.o ev924d.o ev923.o ev923d.o \
	ev922.o ev922d.o ev921.o ev921d.o ev920.o ev920d.o th919.o th919d.o \
	da905.o da905d.o kl915.o kl915d.o ev914.o ev914d.o ev913.o ev913d.o \
	ev912.o ev912d.o ev911.o ev911d.o ev910.o ev910d.o ev909.o ev909d.o \
	ev908.o ev908d.o ev907.o ev907d.o ev906.o ev906d.o da904.o da904d.o \
	kl903.o kl903d.o kl902.o kl902d.o ki901.o ki901d.o ev900.o ev900d.o \
	ev899.o ev899d.o uc898.o uc898d.o kl917.o kl917d.o ev897.o ev897d.o \
	ev896.o ev896d.o uc918.o uc918d.o kl895.o kl895d.o uc894.o uc894d.o \
	ev893.o ev893d.o 

all: Cobj2.o

Cobj2.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj2.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

