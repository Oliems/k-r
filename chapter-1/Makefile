CC :=clang
CFLAGS :=-Wunused-variable -Wno-implicit-int -Wno-return-type -g -pedantic -ansi -Werror
C_SOURCES :=$(wildcard *.c)
C_EXECUTABLE :=$(C_SOURCES:.c=)

all:$(C_EXECUTABLE)

$(C_EXECUTABLE):$(C_SOURCES)
		$(CC) $< $(LDFLAGS) $(CFLAGS) -o $@

clean:
		rm -rf $(EXECUTABLE)
