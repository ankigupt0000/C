#include <stdio.h>
#include <stdlib.h>

enum foo { FOO };
enum apple { MACINTOSH, CORTLAND, RED_DELICIOUS };
enum ornage { NAVEL, CLEMENTINE, TANGERINE };

int
main(int argc, char** argv)
{
	enum foo x;

	if(argc != 1){
		fprintf(stderr, "Usage: %s\n", argv[0]);
		return 1;
	}

	printf("FOO = %d\n",FOO);
	printf("sizeof(enum foo) = %lu\n", sizeof(enum foo));

	x=127;
	printf("x = %d\n",x);

	/* note we can add apple and oranges */
	printf("%d\n",RED_DELICIOUS + TANGERINE);

	return 0;
}
