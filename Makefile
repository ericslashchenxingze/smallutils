CC		:= clang
LD		:= ld.gold
RM		:= rm
RMFLAGS		:= -f
LDFLAGS		:= -s
WFLAGS		:= -Weverything -Werror
CFLAGS		:= -Oz -pipe -march=native -fomit-frame-pointer $(WFLAGS)

PROGS		:= cat true false

all: $(PROGS)

cat:		cat.c
true:		true.c
false:		false.c

distclean: clean
clean:
	$(RM) $(RMFLAGS) $(PROGS) *~ *.old *.bak
