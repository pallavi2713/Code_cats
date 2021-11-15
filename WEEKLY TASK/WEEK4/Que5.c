#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *arr,n;
 printf("enter size:");
 scanf("%d",&n);
 arr=malloc(n*(sizeof(int)));int c=0, p=0,t=0;
printf("Input Array consists of only 0,1,2: ");
 for(int i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
     
     if(arr[i]==0){c++;}
      if(arr[i]==1){p++;}
       if(arr[i]==2){t++;}}
     
 
 int i=0;
 while (c > 0) {
        arr[i++] = 0;
        c--;
     
    }
 
    // Then all the 1s
    while (p > 0) {
        arr[i++] = 1;
        p--;
       
    }
 
    // Finally all the 2s
    while (t > 0) {
        arr[i++] = 2;
        t--;
        
    }
if(flag==1){
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}}
else{printf("Invalid Input");}
}




