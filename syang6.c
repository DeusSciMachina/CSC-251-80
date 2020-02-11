/*
Simon Yang
CSC-251-80
Lab #6
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int x =0,y=0,z=0;
	//printf("Enter a seed \n");
	//scanf(" %d", &y);
	srand(time(NULL));
	for(int i =0; i < 10; i++)
	{
	x = rand()%31+50;
	printf("z = %d, y = %d, x = %d \n", z,y,x);
	}
	return EXIT_SUCCESS;

}
