#include<stdio.h>
int main()
{
  int i,j;
  int k=5;
  int count = k * 2 - 1;
  for(i=1;i<=count;i++)

  {    for(j=1;j<=count;j++)
      {  if(i==j || j==count+1-i)
          printf("*");
         else
     {printf(" ");}
     // printf("*");

      }
    
      
      printf("\n");
  }
      return 0;
  }






