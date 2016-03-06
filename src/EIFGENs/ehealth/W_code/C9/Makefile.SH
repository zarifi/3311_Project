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
echo "Compiling C code in C9"
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

OBJECTS = big_file_C9_c.o 

OLDOBJECTS =  et1134.o et1134d.o et1132.o et1132d.o et1130.o et1130d.o et1128.o \
	et1128d.o et1126.o et1126d.o et1124.o et1124d.o va1135.o va1135d.o \
	va1136.o va1136d.o et1133.o et1133d.o et1131.o et1131d.o et1129.o \
	et1129d.o et1127.o et1127d.o et1125.o et1125d.o kl1149.o kl1149d.o \
	ki1143.o ki1143d.o ki1148.o ki1148d.o ev1156.o ev1156d.o mu1152.o \
	mu1152d.o ki1144.o ki1144d.o kl1137.o kl1137d.o ki1146.o ki1146d.o \
	ki1145.o ki1145d.o ev1151.o ev1151d.o kl1142.o kl1142d.o kl1141.o \
	kl1141d.o ev1154.o ev1154d.o ev1155.o ev1155d.o ki1147.o ki1147d.o \
	ev1150.o ev1150d.o ev1153.o ev1153d.o uc1140.o uc1140d.o uc1139.o \
	uc1139d.o uc1138.o uc1138d.o 

all: Cobj9.o

Cobj9.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj9.o $(OBJECTS)
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

