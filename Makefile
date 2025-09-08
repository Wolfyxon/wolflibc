# Compiler
CC := gcc
CFLAGS := -nostdlib -Wno-builtin-declaration-mismatch

# Paths
SRC := src
FILES :=  main.c  main.h  stdio.h stdio.c syscalls.h syscalls.c types.h string.h string.c stdlib.h stdlib.c

# TODO: Improve

all:
	$(CC) $(addprefix $(SRC)/,$(FILES)) $(CFLAGS)

clean:
	rm -rf $(SRC)/*.gch

