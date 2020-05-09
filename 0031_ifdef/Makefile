CC = gcc
CFLAGS = -Wall -std=c99
PROG = ifdef
OBJS = $(PROG).o

say_hi: say_hi.o
	$(CC) $(CFLAGS) -o $@ $^

be_polite_arithmatic: be_polite_arithmatic.o
	$(CC) $(CFLAGS) -o $@ $^
	
be_polite_arithmatic.o: $(PROG).c
	$(CC) $(CFLAGS) -DBE_POLITE -DDEBUG_ARITHMETIC -c -o $@ $^
	
say_hi.o: $(PROG).c
	$(CC) $(CFLAGS) -DSAY_HI -c -o $@ $^
	
clean:
	rm -f $(PROG) $(OBJS) say_hi{,.o} be_polite_arithmatic{,.o}