#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

	int y=0;
	printf("Enter a value for y.");
	scanf(" %d", &y);
	printf(" %d\n", y);
	
	int z=0;
	printf("Enter a value for z");
	scanf(" %d", &z);
	printf(" %d\n", z);
	double x=0;
	x = pow(y,2) +pow(z,2);

	printf("%.1f = %d^2 + %d^2\n",x,y,z);
	return EXIT_SUCCESS;

	

}
