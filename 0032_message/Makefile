CC = gcc
CFLAGS = -Wall -std=c99
PROG = message
OBJS = $(PROG).o

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
	
$(OBJS): $(PROG).c
	$(CC) $(CFLAGS) -DMESSAGE='"Hi there!"' -c -o $@ $^
	
clean:
	rm -f $(PROG) $(OBJS)