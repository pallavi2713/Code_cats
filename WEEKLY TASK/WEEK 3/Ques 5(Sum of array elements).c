#include<stdio.h>
#include<stdlib.h>
int main()
{ int n,k;
int *ar;
 printf("Enter n :");
 scanf("%d",&n);
 ar=malloc(n*(sizeof(int)));
 int sum=0;
 for(int i=0;i<n;i++)
 {
     scanf("%d",&ar[i]);
 }printf("INDEX:VALUE\n");
   for(int i=0;i<n;i++)
     { sum+=ar[i];
       printf("%d    :  %d\n",i,ar[i]);
     }
printf("Sum of all the elements of array :%d\n",sum);
}