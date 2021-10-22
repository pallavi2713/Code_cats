#include<stdio.h>
#include<stdbool.h>
bool checkyear(int year)
{
    
    if((year%4 == 0 && year%100!= 0) || year%400==0)
    return true;
    else
    return false;

}
int main()
{ int year;
    printf("ENTER YEAR :");
    scanf("%d",&year);
    if(checkyear(year)){

printf("--LEAP YEAR--");}
 else printf("--COMMON YEAR--");
 return 0;
}

