#include "CheckPrime.h"
#include<stdio.h>
int checkPrime(unsigned long int number)
{
int boolPrimeNumber=1;
if (number==1 || number==2)
return 1;
if (number%2==0)
return 0;

unsigned long int  i=3;
while(1)
{
printf("Cheking number %lu \n", i);
if (number%i==0)
{
boolPrimeNumber=0;
break;
}
i=i+2;
if (i*i<number)
break;
}
return boolPrimeNumber; 
}


