# Compiler
CC := gcc
CFLAGS := -nostdlib -Wno-builtin-declaration-mismatch

# Paths
SRC := src
BUILD := build
FILES :=  main.c  main.h  stdio.h stdio.c syscalls.h syscalls.c types.h string.h string.c stdlib.h stdlib.c

# TODO: Improve

all:
	mkdir -p $(BUILD)
	cd $(BUILD) && $(CC) -c $(addprefix ../$(SRC)/,$(FILES)) $(CFLAGS)

clean:
	rm -rf $(SRC)/*.gch
	rm -rf *.o

