CC = gcc
CFLAGS = -Wall
DIR = src

all : test

test : 
	$(CC) $(CFLAGS) $(DIR)/calc.c $(DIR)/test_main.c -o calctest

clean :
	rm -f calctest