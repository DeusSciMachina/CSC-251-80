/*
Simon Yang
CSC-251
1-28-2020
lab #2
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x,y=0;
	x = 0;

	x = x + 5;
	printf("%d \n",x);
	printf("Enter a number:");
	scanf ("%d", &y);
	printf("%d \n",y);
	x = x-5;
	printf("%d \n",x);
	x = x/5;
	printf("%d \n",x);
	x = x*5;
	printf("%d \n",x);
	x = x%5;
	printf("%d \n", x);
	return EXIT_SUCCESS;
}
