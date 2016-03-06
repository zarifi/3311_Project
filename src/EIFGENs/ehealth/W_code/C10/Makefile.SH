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
echo "Compiling C code in C10"
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

OBJECTS = big_file_C10_c.o 

OLDOBJECTS =  et1177.o et1177d.o ev1176.o ev1176d.o ev1172.o ev1172d.o ev1171.o \
	ev1171d.o ev1170.o ev1170d.o ev1161.o ev1161d.o ev1169.o ev1169d.o \
	ev1168.o ev1168d.o ev1182.o ev1182d.o ev1183.o ev1183d.o ev1167.o \
	ev1167d.o ev1179.o ev1179d.o ev1178.o ev1178d.o ev1175.o ev1175d.o \
	ev1166.o ev1166d.o ev1186.o ev1186d.o ev1165.o ev1165d.o ev1164.o \
	ev1164d.o ev1181.o ev1181d.o ev1157.o ev1157d.o ev1189.o ev1189d.o \
	ev1159.o ev1159d.o ev1185.o ev1185d.o ev1174.o ev1174d.o ev1163.o \
	ev1163d.o ev1180.o ev1180d.o ev1173.o ev1173d.o ev1187.o ev1187d.o \
	uc1158.o uc1158d.o kl1160.o kl1160d.o ev1162.o ev1162d.o ev1188.o \
	ev1188d.o ev1184.o ev1184d.o 

all: Cobj10.o

Cobj10.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj10.o $(OBJECTS)
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

