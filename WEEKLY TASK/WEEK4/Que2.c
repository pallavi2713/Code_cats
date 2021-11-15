//array hashing - frequency count technique
#include<stdio.h>
#include<stdlib.h>
int hash[100];
int main()
{int *ar,n;
  printf("enter size of array :");
  scanf("%d",&n);
  ar=malloc(n*(sizeof(int)));
  for(int p=0;p<n;p++)
  {
      scanf("%d",&ar[p]);
      hash[ar[p]]++;
  }  for(int i=0;i<100;i++)
  {
    if(hash[i]!=0)
    {
      printf("%d : %d\n",i,hash[i]);
    }
  }}
  





