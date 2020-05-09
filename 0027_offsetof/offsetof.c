#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>

/* Just for demo of bit fields specification
 * The below is difinition of structure which (probably)
 * occupies only one byte and supplies four 2-bit fields,
 * each of which holds value in range 0-3.
 */
struct color {
	unsigned int red  : 2;
	unsigned int green: 2;
	unsigned int blue : 2;
	unsigned int alpha: 2;
};

int
main(int argc, char** argv)
{
	struct foo{
		int i;
		char c;
		double d;
		float f;
		char *s;
	};

	printf("i is at %lu\n", offsetof(struct foo, i));
	printf("c is at %lu\n", offsetof(struct foo, c));
	printf("d is at %lu\n", offsetof(struct foo, d));
	printf("f is at %lu\n", offsetof(struct foo, f));
	printf("s is at %lu\n", offsetof(struct foo, s));

	return 0;
}
