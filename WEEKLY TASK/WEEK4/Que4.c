#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *ar,n,sum;
 printf("Enter size of array:");
 scanf("%d",&n);

 ar=malloc(n*(sizeof(int)));
  printf("Enter elements:");
 for(int i=0;i<n;i++)
 {
     scanf("%d",ar+i);
 }
 printf("\nEnter Sum :");
 scanf("%d",&sum);
 
 int p=n-1;
 int flag=0;
 int i=0;
         
     while(i<p)
    {
    if(ar[i]+ar[p]==sum)
    {
        printf("\n%d:%d\n",i,p);
        flag=1;
        break;
    }
    if(ar[i]+ar[p]>sum)
    {
        p--;
    }
    if(ar[i]+ar[p]<sum)
    {
        i++;
    }
    
    }
    if(flag!=1)
    {
        printf("\nNo Combination exists for given sum! ");
    }
    return 0;
 }




