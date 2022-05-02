CC := clang
CFLAGS := -Wunused-variable -Wno-implicit-int -Wno-return-type -pedantic -ansi
LIB := ../ch1.c
BIN := ../exe/

.PHONY: all clean 1-1 1-2 1-3 1-4 1-5 1-6 1-7 1-8 1-9 1-10

all: 1-1 1-2 1-3 1-4 1-5 1-6 1-7 1-8 1-9 1-10

1-1:
	cd 1-1 && \
	$(CC) $(CFLAGS) exercise-1-1.c -o $(BIN)exercise-1-1.exe && \
	$(CC) $(CFLAGS) exercise-1-2.c -o $(BIN)exercise-1-2.exe && \
	$(CC) $(CFLAGS) hello-world.c -o $(BIN)hello-world.exe

1-2:
	cd 1-2 && \
	$(CC) $(CFLAGS) exercise-1-3.c -o $(BIN)exercise-1-3.exe && \
	$(CC) $(CFLAGS) exercise-1-4.c -o $(BIN)exercise-1-4.exe && \
	$(CC) $(CFLAGS) fahrenheit-to-celsius-v1.c -o $(BIN)fahrenheit-to-celsius-v1.exe && \
	$(CC) $(CFLAGS) fahrenheit-to-celsius-v2.c -o $(BIN)fahrenheit-to-celsius-v2.exe

1-3:
	cd 1-3 && \
	$(CC) $(CFLAGS) celsius-to-fahrenheit-for.c -o $(BIN)celsius-to-fahrenheit-for.exe && \
	$(CC) $(CFLAGS) exercise-1-5.c -o $(BIN)exercise-1-5.exe && \
	$(CC) $(CFLAGS) fahrenheit-to-celsius-for.c -o $(BIN)fahrenheit-to-celsius-for.exe

1-4:
	cd 1-4 && \
	$(CC) $(CFLAGS) fahrenheit-to-celsius-symbolic-constants.c -o $(BIN)fahrenheit-to-celsius-symbolic-constants.exe

1-5:
	cd 1-5 && \
	$(CC) $(CFLAGS) character-counting-v1.c -o $(BIN)character-counting-v1.exe && \
	$(CC) $(CFLAGS) character-counting-v2.c -o $(BIN)character-counting-v2.exe && \
	$(CC) $(CFLAGS) exercise-1-6.c -o $(BIN)exercise-1-6.exe && \
	$(CC) $(CFLAGS) exercise-1-7.c -o $(BIN)exercise-1-7.exe && \
	$(CC) $(CFLAGS) exercise-1-8.c -o $(BIN)exercise-1-8.exe && \
	$(CC) $(CFLAGS) exercise-1-9.c -o $(BIN)exercise-1-9.exe && \
	$(CC) $(CFLAGS) exercise-1-10.c -o $(BIN)exercise-1-10.exe && \
	$(CC) $(CFLAGS) exercise-1-11.c -o $(BIN)exercise-1-11.exe && \
	$(CC) $(CFLAGS) exercise-1-12.c -o $(BIN)exercise-1-12.exe && \
	$(CC) $(CFLAGS) input-to-output-v1.c -o $(BIN)input-to-output-v1.exe && \
	$(CC) $(CFLAGS) input-to-output-v2.c -o $(BIN)input-to-output-v2.exe && \
	$(CC) $(CFLAGS) line-counting.c -o $(BIN)line-counting.exe && \
	$(CC) $(CFLAGS) word-counting.c -o $(BIN)line-counting.exe

1-6:
	cd 1-6 && \
	$(CC) $(CFLAGS) count-digits-blanks.c -o $(BIN)count-digits-blanks.exe && \
	$(CC) $(CFLAGS) exercise-1-13-horizontal.c -o $(BIN)exercise-1-13-horizontal.exe && \
	$(CC) $(CFLAGS) exercise-1-13-vertical.c -o $(BIN)exercise-1-13-vertical.exe && \
	$(CC) $(CFLAGS) exercise-1-14.c -o $(BIN)exercise-1-14.exe

1-7:
	cd 1-7 && \
	$(CC) $(CFLAGS) exercise-1-15.c -o $(BIN)exercise-1-15.exe && \
	$(CC) $(CFLAGS) power-function.c -o $(BIN)power-function.exe

1-8:
	cd 1-8 && \
	$(CC) $(CFLAGS) power-function-v2.c -o $(BIN)power-function-v2.exe

1-9:
	cd 1-9 && \
	$(CC) $(CFLAGS) exercise-1-16.c $(LIB) -o $(BIN)exercise-1-16.exe && \
	$(CC) $(CFLAGS) exercise-1-17.c $(LIB) -o $(BIN)exercise-1-17.exe && \
	$(CC) $(CFLAGS) exercise-1-18.c $(LIB) -o $(BIN)exercise-1-18.exe && \
	$(CC) $(CFLAGS) exercise-1-19.c $(LIB) -o $(BIN)exercise-1-19.exe && \
	$(CC) $(CFLAGS) print-longest-line.c $(LIB) -o $(BIN)print-longest-line.exe

1-10:
	cd 1-10 && \
	$(CC) $(CFLAGS) exercise-1-20.c $(LIB) -o $(BIN)exercise-1-20.exe && \
	$(CC) $(CFLAGS) exercise-1-21.c $(LIB) -o $(BIN)exercise-1-21.exe && \
	$(CC) $(CFLAGS) exercise-1-22.c $(LIB) -o $(BIN)exercise-1-22.exe && \
	$(CC) $(CFLAGS) exercise-1-23.c $(LIB) -o $(BIN)exercise-1-23.exe && \
	$(CC) $(CFLAGS) exercise-1-24.c $(LIB) -o $(BIN)exercise-1-24.exe

clean:
	rm exe/*
