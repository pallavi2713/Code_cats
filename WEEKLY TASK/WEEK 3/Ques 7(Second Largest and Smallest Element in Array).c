#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{ int sz,max,min,sec_max=INT_MIN,sec_min=INT_MIN;
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
       if(max<ar[i])
       {
         sec_max=max;
         max=ar[i];
        }
     else if(ar[i]<min)
        {
         sec_min=min;
         min=ar[i];
         }
 
       if((sec_max<ar[i] || sec_max==INT_MIN) && ar[i]<max ){
         sec_max=ar[i];
         }
  else if((sec_min>ar[i] || sec_min==INT_MIN ) && ar[i]>min)
     {sec_min=ar[i];
     }
     }    

printf("MAX=%d\nMIN=%d\n",max,min);

 printf("\nThe Second Largest element is :%d\nThe Second Smallest element is :%d", sec_max,sec_min);}