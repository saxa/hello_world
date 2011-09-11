CC = gcc
CFLAGS = -Wall

OBJS = main.o

SRCS = main.c

hello_world: $(OBJS)
	$(CC) $(CFLAGS) -o hello_world $(OBJS)

main.o: main.c main.h
	$(CC) $(CFLAGS) -c $(SRCS) 

clean: 
	-rm $(OBJS) hello_world ./*~

debug: main.o hello_world
	$(CC) $(CFLAGS) -g -c $(SRCS) -DDEBUG

.PHONY: clean debug
