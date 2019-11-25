#Makefile

CC=gcc
CFLAGS= -Wall

all: bank

bank: myBank.o main.o
	$(CC) $(CFLAGS) -fPIC -o bank main.o myBank.o

main.o: main.c myBank.h
	$(CC) $(CFLAGS)  -c main.c
	
myBank.o: myBank.c myBank.h
	$(CC) $(CFLAGS) -fPIC -c myBank.c
	
.PHONY: clean all

clean:
	rm -f *.o bank