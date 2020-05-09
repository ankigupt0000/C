#include <stdio.h>
#include <assert.h>

int
main(int argc, char ** argv)
{
#ifdef SAY_HI
	puts("Hi.");
#else /* Matches #ifdef SAY_HI */
#ifndef BE_POLITE
	puts("Go Away!");
#else /* Matches #ifndef BE_POLITE */
	puts("I'm sorry, I don't feel like talking today.");
#endif /* Matches #ifndef BE_POLITE */
#endif /* Matches #ifdef SAY_HI */

#ifdef DEBUG_ARITHMETIC
	assert(2+2 == 5);
#endif

	return 0;
}
