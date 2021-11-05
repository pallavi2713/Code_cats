#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ar;
    int num,counter=0,sz;
    printf("Enter Size of array :");
    scanf("%d",&sz);
    printf("Input Elements :\n");
    ar=malloc(sz*sizeof(int));
    for(int i=0;i<sz;i++)
    {
        scanf("%d",ar+i);
    }
    printf("Input Number :");
    scanf("%d",&num);
    for(int j=0;j<sz;j++)
    {
      if(num==ar[j])
      {counter++;}}
    printf("Element %d occur %d times in array.",num,counter);
}