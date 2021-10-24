#include<stdio.h>
void input(char chr)
{
    if((97<=chr && chr<=122 )|| (65<=chr && chr<=90))
     printf("Alphabet");
    else if(48<=chr && chr<=57) {printf("Digit");}
    else printf("Special Character");
}

int main(){
    char chr;
    printf("ENTER A CHARACTER  :");
    scanf("%c",&chr);
  input(chr);
}




