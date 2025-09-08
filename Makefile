# Compiler
CC := gcc
CFLAGS := -nostdlib -Wno-builtin-declaration-mismatch

# Paths
SRC := src
BUILD := build
LIB := wolflibc.a
FILES :=  main.c  main.h \
		  stdio.h stdio.c \
		  syscalls.h syscalls.c \
		  types.h \
		  string.h string.c \
		  stdlib.h stdlib.c

lib:
	mkdir -p $(BUILD)

	cd $(BUILD) && $(CC) -c $(addprefix ../$(SRC)/,$(FILES)) $(CFLAGS)
	ar rcs $(BUILD)/$(LIB) $(BUILD)/*.o

examples: lib
	mkdir -p $(BUILD)/examples

	for f in examples/*; do \
		$(CC) $$f $(BUILD)/$(LIB) -o $(BUILD)/$${f%.c} $(CFLAGS) -I$(SRC); \
	done

clean:
	rm -rf $(SRC)/*.gch
	rm -rf *.o

