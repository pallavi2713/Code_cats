#include <stdio.h>
 
int main()
{
    int a,b,c;
     
    
    int *ptr[3];
     
    ptr[0]= &a;
    ptr[1]= &b;
    ptr[2]= &c;
     

    a=10;
    b=20;
    c=30;
    
    printf("value of a: %d, b: %d, c: %d\n",*ptr[0],*ptr[1],*ptr[2]);
 
    
    *ptr[0] +=1;
    *ptr[1] +=10;
    *ptr[2] +=100;
    printf("After adding \nvalue of a: %d, b: %d, c: %d\n",*ptr[0],*ptr[1],*ptr[2]);
 
    return 0;
}