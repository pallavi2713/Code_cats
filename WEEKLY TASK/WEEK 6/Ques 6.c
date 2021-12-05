#include<stdio.h>
#include<stdlib.h>
void parse(char ar[], int n)
{ char res[100];
int i=0;
printf("After Parsing : ");
 while(i<n){
   if(ar[i]=='G') {res[i]='G';printf("%c",res[i]);i++;}
   else if(ar[i]=='(' && (i+1)<n && ar[i+1]==')') {res[i]='o';printf("%c",res[i]);i+=2;}
   else {res[i]='a';res[i+1]='l'; printf("%c%c",res[i],res[i+1]);i+=4;}}}
int main()
{
    int n;
    printf("Enter size of string : ");
    scanf("%d",&n);
    char ar[n];
    printf("Enter string comprises of (G,(),(al)) :");
    scanf("%s",ar);
    parse(ar,n);
}




