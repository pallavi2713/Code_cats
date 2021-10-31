#include<stdio.h>
int main()
{ int base,ex;
 printf("ENTER BASE :");
 scanf("%d",&base);
 printf("\nENTER EXPONENT :");
 scanf("%d",&ex);
 int pow=1;
  for(int i=1;i<=ex;i++)
  {  
      pow=pow*base;
  }
printf("%d ^ %d = %d",base,ex,pow);
}

