#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ar;
  int n;
  printf("Enter size of the array:");
  scanf("%d",&n);
  ar=malloc(n*(sizeof(int)));
for(int i=0;i<n;i++)
   { 
     scanf("%d",ar+i);
   }
printf("Reverse order:");
for(int i=n-1;i>=0;i--)
{
   printf("%d",*(ar+i));
   if(i!=0)
   { printf(",");}
}

}
