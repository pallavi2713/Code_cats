#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    int max=(num1>num2 && num3)?num1:(num2>num3)?num2:num3;
    
     printf("MAX OF %d , %d and %d is %d", num1,num2,num3,max );
}



