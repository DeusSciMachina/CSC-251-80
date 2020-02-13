/*
 Simon Yang
 CSC-250-81
 Lab 5
 */
 
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int prompt(void);
int ranGenerator(int y);
void Output(int countOne, int countTwo, int countThree,int countFour,int countFive,int countSix,int countSeven,int countEight,int countNine,int countTen);
int main(void)
{
int x=0;
int countOne=0, countTwo=0, countThree=0,countFour=0,countFive=0,countSix=0,countSeven=0,countEight=0,countNine=0,countTen=0;
srand(time(NULL))%10 + 1;
int y = prompt();
x = ranGenerator(y);
if(x == 1)
{
 countOne++;
}
else if(x ==2)
{
countTwo++;
}
else if (x==3)
{
countThree++;
}
else if (x==4)
{
countFour++;
}
else if (x==5)
{
countFive++;
}
else if (x == 6)
{
countSix++;
}
else if (x == 7)
{
countSeven++;
}
else if (x == 8)
{
countEight++;
}
else if (x==9)
{
countNine++;
}
else if (x==10)
{
countTen++;
}
else
{
;
}
Output(countOne, countTwo, countThree,countFour,countFive,countSix,countSeven,countEight,countNine,countTen)
}

int prompt(void)
{
scanf("%d", &y);
return y;
}

int ranGenerator(int y)
{
int i ;
for (i = 0; i < y+1; i++)
{
x = rand()%10+1;

}
return x;
}


void Output (int countOne, int countTwo, int countThree,int countFour,int countFive,int countSix,int countSeven,int countEight,int countNine,int countTen)
{

}
