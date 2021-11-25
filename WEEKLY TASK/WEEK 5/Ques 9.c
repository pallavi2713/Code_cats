#include <stdio.h> 
int main()
{
    int a=2;          
    int *p1;        
    int **p2; 
    p1 =&a;         
    p2=&p1;         
           
    printf("\nValue of a (using p1): %d", *p1);
    printf("\nValue of a (using p2): %d", **p2);
     
    *p1=280;
    printf("\nValue of a: %d",*p1);
    **p2=288;
    printf("\nValue of a: %d",**p2);
    return 0;
}