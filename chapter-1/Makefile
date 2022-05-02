# https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
# https://stackoverflow.com/questions/22072773/batch-export-of-org-mode-files-from-the-command-line

CC=clang
CFLAGS=-Wunused-variable -Wno-implicit-int -Wno-return-type -g -pedantic -ansi -Werror
OUT_DIR=/Users/matthieu/Downloads/k-r/chapter-1/bin/
# Using GNU Make-specific functions here
FILES=$(patsubst %.c,$(OUT_DIR)/%.o,$(wildcard *.c))

.PHONY: all clean install

all: install

install: $(OUT_DIR) $(FILES)

$(OUT_DIR):
    	mkdir -v -p $(OUT_DIR)

%.c: %.o
       $(CC) $< $(CFLAGS) -o $@

$(OUT_DIR)/%.o: %.o
        install -v -m 644 -t $(OUT_DIR) $<
        rm $<

clean:
        rm *.o
