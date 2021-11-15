#include<stdio.h>
#include<stdlib.h>
int iindex(int ar[],int f,int i,int l)
{
  while(i<l){

      int mid=(i+l)/2;
      if(ar[mid]==f)
      return mid;
       if(f<ar[mid]){
           l=mid;
       }
       if(f>ar[mid]){
           i=++mid;
       }
  }
  return i;
}
int main()
{
  int *ar,n,f;
 printf("enter size:");
 scanf("%d",&n);
 ar=malloc(n*(sizeof(int)));
 for(int j=0;j<n;j++){
     scanf("%d",ar+j);
 }printf("Enter number to be searched:");
  scanf("%d",&f);
   int i=0;
   int t=iindex(ar,f,i,n);
   printf("Present at index :%d",t);
 
}




