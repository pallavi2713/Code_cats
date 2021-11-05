//Coin-Flip
#include<stdio.h>
int main()
{ int I,N,Q,T,G;
scanf("%d",&T);

while(T--)
{
    scanf("%d",&G); 
     
     while(G--)
     {
        scanf("%d%d%d",&I,&N,&Q);
         if(I==Q)
         { 
             N/=2;
        }
         else 
         {
             N=(N+1)/2;
         }
        printf("%d\n",N);
      }
 }
return 0;
}