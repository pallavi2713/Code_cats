#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int sz,max,min;
    int *ar;
 printf("Enter size :");
 scanf("%d",&sz);
 ar=malloc(sz*(sizeof(int)));
 
 printf("Enter Elements : ");
 
 for(int i=0;i<sz;i++)
 {
     scanf("%d",&ar[i]);
 }
 
 max=min=ar[0];
 
 for(int i=0;i<sz;i++)
 {   
     if(max<ar[i]){max=ar[i];}
     else if(min>ar[i]){min=ar[i];}
 }
 printf("The Largest element is :%d\nThe Smallest element is :%d", max,min);}