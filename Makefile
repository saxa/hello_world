CC = gcc
CFLAGS = -Wall

OBJS = main.o

SRCS = main.c

hello_world: $(OBJS)
	$(CC) $(CFLAGS) -o hello_world $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) -c $(SRCS) 
