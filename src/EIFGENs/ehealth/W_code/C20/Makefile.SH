case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C20"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)/library/encoding/implementation/include" -I"\$(ISE_LIBRARY)/library/process/classic/unix/include" -I"\$(ISE_LIBRARY)/library/vision2/spec/include" -I"\$(ISE_LIBRARY)/library/vision2/implementation/gtk/Clib" `$ISE_LIBRARY/library/encoding/implementation/unix/Clib/iconv-config --include_path` `$ISE_LIBRARY/library/vision2/implementation/gtk/Clib/vision2-gtk-config --include_path`
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $ccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $cppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = eHealth$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C20_c.o 

OLDOBJECTS =  fu1508.o fu1508d.o ty1498.o ty1498d.o ty1503.o ty1503d.o bi1519.o \
	bi1519d.o in1515.o in1515d.o bi1516.o bi1516d.o tr1517.o tr1517d.o \
	ac1507.o ac1507d.o ac1514.o ac1514d.o li1518.o li1518d.o kl1500.o \
	kl1500d.o kl1509.o kl1509d.o in1499.o in1499d.o kl1501.o kl1501d.o \
	kl1510.o kl1510d.o ev1490.o ev1490d.o ki1504.o ki1504d.o kl1502.o \
	kl1502d.o kl1511.o kl1511d.o ev1506.o ev1506d.o ev1513.o ev1513d.o \
	ev1489.o ev1489d.o ki1505.o ki1505d.o ev1493.o ev1493d.o ev1496.o \
	ev1496d.o uc1487.o uc1487d.o ev1494.o ev1494d.o ev1491.o ev1491d.o \
	ev1492.o ev1492d.o uc1488.o uc1488d.o ev1495.o ev1495d.o ev1497.o \
	ev1497d.o kl1512.o kl1512d.o 

all: Cobj20.o

Cobj20.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj20.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

