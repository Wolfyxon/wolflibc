# Compiler
CC := gcc
CFLAGS := -nostdlib -Wno-builtin-declaration-mismatch

# Paths
SRC := src
FILES := exit.c exit.h  main.c  main.h  stdio.h  syscalls.h  types.h string.h

# TODO: Improve

all:
	$(CC) $(addprefix $(SRC)/,$(FILES)) $(CFLAGS)

clean:
	rm -rf $(SRC)/*.gch

