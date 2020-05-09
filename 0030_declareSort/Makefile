CC = gcc
CFLAGS = -Wall -std=c99 
MAIN = useDeclareSort
OBJS = $(MAIN).o

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
	
$(OBJS): $(MAIN).c
	$(CC) $(CFLAGS) -c -o $@ $^
	
clean:
	rm -f $(OBJS) $(MAIN)