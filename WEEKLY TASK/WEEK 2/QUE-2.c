#include<stdio.h>

int factorial(int k)
{   if(k<=1)
      return 1;
    else
      return k*factorial(k-1);
 }
int main()
{   int n;
    printf("**FACTORIAL**\n\nENTER N : "); scanf("%d",&n);
    int f=factorial(n);
    printf("Factorial of %d is: %d",n,f);
    }



