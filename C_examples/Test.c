// gcc -c -o CheckPrime.o CheckPrime.c
// gcc -c -o Test.o Test.c
// gcc  -o MyProg Test.o CheckPrime.o


#include<stdio.h>
#include"CheckPrime.h"
int main()
{

unsigned long int number, i=2, factor=1;

printf("Enter a number:\n");
scanf("%lu",&number);
printf("you entered %lu \n",number);

for (i=1;i<number; i++)
{
if(number%i==0)
{
if (checkPrime(i))
{
factor=i;
printf("Prime nuber %lu \n" , i);
}
}
}
printf("Prime Factor %lu \n", factor);
return 0;
}

