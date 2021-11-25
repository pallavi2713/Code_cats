//C program to count vowels and consonants in a string using pointer.
#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int  c,v;
     
    printf("Enter a string: ");
    gets(str);
     
    //assign address of str to ptr
    ptr=str;
     
    c=v=0;
    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
            v++;
        else
            c++;
           ptr++;
    }
     
    printf("Total number of VOWELS: %d, CONSONANT: %d\n",v,c);        
    return 0;
}



