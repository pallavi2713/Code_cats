#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    
    int max=(num1>num2)?num1:num2;
     printf("MAX OF %d and %d is %d", num1,num2,max );
}



