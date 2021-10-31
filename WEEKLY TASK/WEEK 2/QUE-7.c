#include <stdio.h>

int main() {
	int a,n;
          printf("ENTER THE NUMBER OF INPUTS :");
	scanf("%d",&a);
	 while(a!=0)
	{
	   int  c=0,z=5;
          printf("\nENTER N :");
	    scanf("%d",&n);
	    
	   while((n/z)>0)
	   {
	   c=c+(n/z);
	   z=z*5;
	   }
	   printf("\nNUMBER OF TRAILING ZEROS :%d",c);
       a--;
	}
    return 0;

}

