CC = gcc
CFLAGS = -Wall

OBJS = main.o usage.o

SRCS = main.c usage.c

hello_world: $(OBJS)
	$(CC) $(CFLAGS) -o hello_world $(OBJS)

main.o: main.c main.h
	$(CC) $(CFLAGS) -c $(SRCS) 

usage.o: usage.c
	$(CC) $(CFLAGS) -c $(SRCS) 

clean: 
	-rm $(OBJS) hello_world ./*~

debug: main.o usage.o hello_world
	$(CC) $(CFLAGS) -g -c $(SRCS) -DDEBUG

.PHONY: clean debug
