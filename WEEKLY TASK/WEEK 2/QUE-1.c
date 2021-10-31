#include <stdio.h>
void main()
{
   int i,n,sum=0;
   int even,odd=0;
   printf("Input Value of terms : ");
   scanf("%d",&n);
   printf("\nThe first %d natural numbers are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum+=i;
     if(i&1){odd+=i;}
     else{even+=i;}
    
   }

   printf("\nThe Sum of natural numbers upto %d terms : %d \n",n,sum);
   printf("\nThe Sum of even natural numbers: %d \n",even);
   printf("\nThe Sum of odd natural numbers: %d \n",odd);

}