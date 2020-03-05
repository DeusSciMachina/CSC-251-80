#include <stdio.h>
#include <stdlib.h>
#define SIZE 30
#define SIZE1 60

void printer(int rname[SIZE]);
void filleven(int rname[SIZE]);
void fillodd(int rname[SIZE]);
void swapoddandeven(int rname[], int rname2[]);

int main(void)
{
	int arr[SIZE]= {0};
	int arr1[SIZE]= {0};
	int arr2[SIZE1]= {0};
	printer (arr);
	filleven(arr);
	printer(arr);
	fillodd(arr1);
	printer(arr1);
	swapoddandeven(arr, arr1);
	printer(arr);
	printer (arr1);
	return EXIT_SUCCESS;
}

void printer(int rname[SIZE])
{
	int i =0;
	for(i = 0; i <SIZE; i++)
	{
		printf("Array [%d]:	%d\n", i, rname[i]);
	}
		printf("\n");
}

void filleven(int rname[SIZE])
{
	int evenVal=0;
	int i;
	for (i = 0;i < SIZE; i++)
	{
		evenVal+=2;
		rname[i] = evenVal;
	}
}	
void fillodd(int rname[SIZE])
{
	int oddVal = 1;
        int i;
	for (i = 0; i < SIZE; i++)
	{
		oddVal +=2;
		rname[i] = oddVal;
	}	
}
void swapoddandeven(int rname[SIZE], int rname2[SIZE])
{
	int i;
	for(i= 0; i < SIZE; i++)
	{
		int temp = rname[i];
		int temp2 = rname2[i];
		rname[i] = temp2;
		rname2[i] = temp;
	}
}
void sortoddandeven(int rname[SIZE], int rname1[SIZE], int rname2[SIZE1])
{
	int i;
	for(i =0; i< SIZE1; i++)
	{
	
	}
}

