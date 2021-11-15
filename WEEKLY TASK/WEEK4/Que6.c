#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *arr,n;
 printf("enter size:");
 scanf("%d",&n);
 arr=malloc(n*(sizeof(int)));
printf("Input a Sorted Array : ");
 for(int i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
 printf("\nEnter Number to be searched:");
 int k;
 scanf("%d",&k);
 for(int i=0;i<n;i++)
 {if(arr[i]==k){printf("Element is present at index: %d",i);}
 else if(arr[i]<k && k<arr[i+1])
 {printf("%d is not present but its possible position is index = %d",k,(i+1));}
 }
 }
