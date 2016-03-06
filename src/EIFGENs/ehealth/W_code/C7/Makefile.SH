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
echo "Compiling C code in C7"
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

OBJECTS = big_file_C7_c.o 

OLDOBJECTS =  ro1078.o ro1078d.o et1077.o et1077d.o da1069.o da1069d.o ab1071.o \
	ab1071d.o da1083.o da1083d.o ti1068.o ti1068d.o ev1076.o ev1076d.o \
	da1067.o da1067d.o du1066.o du1066d.o kl1080.o kl1080d.o ev1084.o \
	ev1084d.o ev1060.o ev1060d.o ev1074.o ev1074d.o ev1059.o ev1059d.o \
	ev1062.o ev1062d.o ev1085.o ev1085d.o ev1075.o ev1075d.o kl1082.o \
	kl1082d.o ev1079.o ev1079d.o ev1072.o ev1072d.o ev1058.o ev1058d.o \
	ev1065.o ev1065d.o ev1063.o ev1063d.o uc1073.o uc1073d.o ev1090.o \
	ev1090d.o ev1061.o ev1061d.o ev1089.o ev1089d.o kl1070.o kl1070d.o \
	ki1081.o ki1081d.o ev1088.o ev1088d.o ev1064.o ev1064d.o ev1087.o \
	ev1087d.o ev1086.o ev1086d.o 

all: Cobj7.o

Cobj7.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj7.o $(OBJECTS)
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

