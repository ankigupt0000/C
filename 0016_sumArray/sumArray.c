#include <stdio.h>

/* compute the sum of the first n elements of array a */

int
sumArray(int n, const int *a)
{
	int i;
	int sum;

	sum = 0;

	for(i=0;i<n;i++){
		sum+=a[i];
	}
	return sum;
}

int
main(int argc, char** argv)
{
	int arr[]={1,3,4,3,4,2,347,8,7,4,4};
	//int len = 11;
	int n = 5;
	printf("The sum of array is %d\n", sumArray(n,arr));
	return 0;
}
