#include<stdio.h>
#include<math.h>
int j;
void armstrong(int n)
{int sum=0;
 for(int i=0;n!=0;i++)
     {
     int k=n%10;
     sum+=k*k*k;
     n/=10;
     }
if(sum==j){printf("%d is an armstrong number",j);}
else{printf("%d is not an armstrong number",j);}
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    j=n;
    armstrong(n);
    return 0;
}