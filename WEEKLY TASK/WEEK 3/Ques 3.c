#include<stdio.h>
int main()
{
  int i,j;

  for(i=0;i<=5;i++)
  {   for(int k=i;k<5;k++)
     {printf(" ");}
    
      for(j=0;j<((2*i)-1);j++)
      {
          printf("*");
      }
      printf("\n");
  }
      return 0;
  }






