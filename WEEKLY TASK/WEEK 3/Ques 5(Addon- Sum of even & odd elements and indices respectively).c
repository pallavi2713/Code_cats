#include<stdio.h>
int main()
{ int n,k;
int ar[100];
 printf("Enter n :");
 scanf("%d",&n);
 int sum=0,even=0,odd=0;
 int even_index=0,odd_index=0;
 for(int i=0;i<n;i++)
 {
     scanf("%d",&ar[i]);
 }printf("INDEX:VALUE\n");
   for(int i=0;i<n;i++)
     { sum+=ar[i];
       printf("%d    :  %d\n",i,ar[i]);
       if(i%2==0 || i==0)
        {
           even_index+=ar[i];
        }
       else{odd_index+=ar[i];}
       
       if(ar[i]%2==0)
       {even+=ar[i];}
       else{odd+=ar[i];}

}
printf("Sum of all the elements of array :%d\n",sum);
printf("Sum of all the even elements :%d\n",even);
printf("Sum of all the odd elements :%d\n",odd);
printf("Sum of elements at even indexes :%d\n",even_index);
printf("Sum of elements at odd indexes :%d\n",odd_index);
}