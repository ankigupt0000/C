CC = gcc
CFLAGS = -Wall -std=c99
PROG = myString
OBJS = $(PROG).o

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
	
$(OBJS): $(PROG).c
	$(CC) $(CFLAGS) -c -o $@ $^
	
clean:
	rm -f $(PROG) $(OBJS)