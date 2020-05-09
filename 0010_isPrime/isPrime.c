#include <stdio.h>
#include <stdlib.h>
/* return 1 if n is prime, 0 otherwise */

int
isPrime(int n)
{
	int i;

	if(n<2) return 0; /* special case for 0,1 negative n */

	for(i = 2; i < n; i++){
		if(n%i == 0){
			/* found a factor */
			return 0;
		}
	}
	/* no factor */
	return 1;
}

int
main(int argc, char** argv)
{
	if(argc < 2){
		fprintf(stderr,"Usage: %s arg\n",argv[0]);
		exit(1);
	}
	printf("%s ", argv[1]);
	if(isPrime(atoi(argv[1])))
	{
		printf("is Prime\n");
	}
	else
	{
		printf("is not Prime\n");
	}
}
