#include <stdio.h>
#include <stdlib.h>
/* Given n, compute n! = 1*2*...*n */
/* Warning: will overflow on 32-bit machines if n > 12 */
int
factorial(int n)
{
	int i;
	int product;

	if(n < 2) return n;
	/* else */

	product = 1;

	for(i = 2; i <= n; i++){
		product*=i;
	}

	return product;
}

int
main(int argc, char** argv)
{
	int num=0;
	if(argc != 2)
	{
		fprintf(stderr,"Usage: %s arg\n", argv[0]);
		exit(1);
	}
	num = atoi(argv[1]);
	printf("Factorial of %d is %d\n",num, factorial(num));
}
