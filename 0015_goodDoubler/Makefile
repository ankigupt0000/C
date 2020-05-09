CC = gcc
PROG = goodDoubler
OBJS = $(PROG).o
CFLAGS = -Wall

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
	
$(OBJS): $(PROG).c
	$(CC) $(CFLAGS) -c -o $@ $^
	
clean:
	rm -f $(OBJS) $(PROG) 
	