
//Find whether an element exists in an array or not using linear search and array hashing
//(Hint - by taking a boolean array, true/false) both.

#include<stdio.h>
#include<stdlib.h>
int hash[100];
int main()
{
int *ar,n,ele;
printf("Enter size of array:");
scanf("%d",&n);
ar=malloc(n*(sizeof(int)));
for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
    hash[ar[i]]=1; //hashing(1:True, 0:False)
}
int p, flag=0;
printf("Enter the element to be searched :");
scanf("%d",&ele);

if(hash[ele]==1){flag=1;}
for(int i=0;i<n;i++){if(ar[i]==ele){ p=i;}}
flag==1?printf("%d is present at %d",ele,p):printf("Not Present");
}


