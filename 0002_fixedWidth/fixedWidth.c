#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <inttypes.h>

#define MAX_VALUE ((UINT64_MAX -1)/3)

int
main(int argc,char** argv)
{
	uint64_t big;
	if(argc != 2)
	{
		fprintf(stderr,"Usage: %s member\n",argv[0]);
		return 1;
	}
	sscanf(argv[1],"%" SCNu64, &big);

	while(big != 1) {
		printf("%" PRIu64 "\n", big);

		if(big%2 == 0) {
			big /= 2;
		} else if(big <= MAX_VALUE) {
			big = 3*big +1;
		} else {
			puts("overflow");
			return 1;
		}
	}
	puts("Reached 1");
	return 0;
}
