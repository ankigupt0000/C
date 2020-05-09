CC = gcc
CFLAGS = -Wall -std=c99 
PROG = counter
MAIN = testCounter
OBJS = $(PROG).o 

$(MAIN): $(OBJS) $(MAIN).o
	$(CC) $(CFLAGS) -o $@ $^
	
$(OBJS): $(PROG).c
	$(CC) $(CFLAGS) -c -o $@ $^
	
$(MAIN).o: $(MAIN).c
	$(CC) $(CFLAGS) -c -o $@ $^
	
clean:
	rm -f $(PROG) $(OBJS) $(MAIN).o $(MAIN)