#include <stdio.h>
#include <stdlib.h>
/* read numbers from stdin until there aren't any more */
/* returns an array of all numbers read or null on error */
/* returns the count of numbers read in *count */

int *
readNumbers(int* count /* RETVAL */)
{
	int mycount; 		/* number of numbers read */
	int size;			/* size of block allocated so far */
	int *a;				/* block */
	int n;				/* number read */

	mycount = 0;
	size = 1;

	a = malloc(sizeof(int) * size); /* allocating zero bytes is tricky */
	if(a == 0) return 0;

	while(scanf("%d",&n) == 1){
		/* is there room ? */
		while(mycount >= size){
			/* double the size to avoid realloc for every number read */
			size *= 2;
			a = realloc(a,sizeof(int)*size);
			if(a == 0) return 0;
		}
		a[mycount++] = n;
	}
	/* now trim off any  excess space */
	a = realloc(a,sizeof(int)*mycount);
	/* note: if a == 0 at this point we'll just return it anyway */

	/* save out mycount */
	*count = mycount;

	return a;
}

int
main(int argc, char** argv)
{
	int *a = NULL;
	int count = 0;
	int i = 0;
	a = readNumbers(&count);
	printf("The array is:\n");
	for(i = 0; i < count; i++)
	{
		printf("%d ",a[i]);
	}

	free(a);

	return 0;
}
