#SimpleTest

CC=gcc
CFLAGS=-g


prefix=$(PWD)/../BuildDir

LIB_PATH=$(prefix)/lib
BIN_PATH=$(prefix)/bin

Simpletest: SimpleTest.o
		$(CC) $(CFLAGS) SimpleTest.o -L$(LIB_PATH) -lefence -o $(BIN_PATH)/SimpleTest
	
clean:
	rm -f *.o core $(BIN_PATH)/SimpleTest
