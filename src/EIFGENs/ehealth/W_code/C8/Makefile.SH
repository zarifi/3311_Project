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
echo "Compiling C code in C8"
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

OBJECTS = big_file_C8_c.o 

OLDOBJECTS =  et1115.o et1115d.o et1114.o et1114d.o et1116.o et1116d.o et1122.o \
	et1122d.o et1120.o et1120d.o et1118.o et1118d.o et1123.o et1123d.o \
	et1121.o et1121d.o et1119.o et1119d.o et1117.o et1117d.o da1113.o \
	da1113d.o ev1112.o ev1112d.o ev1101.o ev1101d.o ev1100.o ev1100d.o \
	ev1099.o ev1099d.o kl1103.o kl1103d.o kl1102.o kl1102d.o ev1098.o \
	ev1098d.o ev1097.o ev1097d.o ev1096.o ev1096d.o ev1111.o ev1111d.o \
	ev1095.o ev1095d.o ev1094.o ev1094d.o ev1093.o ev1093d.o ev1092.o \
	ev1092d.o ev1091.o ev1091d.o ki1108.o ki1108d.o ki1109.o ki1109d.o \
	ki1107.o ki1107d.o ki1106.o ki1106d.o ki1110.o ki1110d.o kl1105.o \
	kl1105d.o uc1104.o uc1104d.o 

all: Cobj8.o

Cobj8.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj8.o $(OBJECTS)
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

