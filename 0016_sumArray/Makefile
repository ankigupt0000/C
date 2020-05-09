CC = gcc
CFLAGS = -Wall
PROG = sumArray
OBJS = $(PROG).o

	
$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
	
$(OBJS): $(PROG).c
	$(CC) $(CFLAGS) -c -o $@ $^
	
clean:
	rm -f $(PROG) $(OBJS)
	