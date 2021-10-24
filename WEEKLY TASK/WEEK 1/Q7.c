#include<stdio.h>
int main()
{
    int Notes[]={2000,500,200,100,50,20,10};
    int x, i , amt;
    int count=0;
    i=0;
    printf("ENTER THE AMOUNT :");
    scanf("%d",&amt);
     while(Notes[i]!='\0')
     {
         x=amt/Notes[i];
         printf("%d:%d \n",Notes[i],x);
         amt=amt% Notes[i] ;
         i++;
         count=count+x;

     }
     printf("Total number of Notes: %d",count);
     return 0;

}