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
echo "Compiling C code in C19"
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

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

