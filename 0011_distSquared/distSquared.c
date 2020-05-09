#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "distSquared.h"

int
distSquared(int dx, int dy)
{
	return dx*dx + dy*dy;
}

int
main(int argc, char** argv)
{
	int x=0;
	int y=0;
	if(argc != 3)
	{
		fprintf(stderr,"Usage: %s x y\n",argv[0]);
		exit(1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("Distance of point (%d,%d) from origin(0,0) is %f\n",x,y,sqrt(distSquared(x,y)));

	return 0;
}
