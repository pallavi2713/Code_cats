#include<stdio.h>
int main()
{
 int a , ar[50];
 printf("Enter a number :");
scanf("%d",&a);
 printf("\nThe number in reverse order is : ");
for(int i=0;a!=0;i++)
{
    ar[i]=a%10;
    printf("%d",ar[i]);
    a/=10;
}
return 0;
}




