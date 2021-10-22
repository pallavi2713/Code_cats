#include<stdio.h>
int main(){
    int num;

    printf("ENTER A NUM  :");
    scanf("%d",&num);
    switch(num%2){
        case 0:
        printf("**EVEN NUMBER**");
        break;
        case 1:
        printf("**ODD NUMBER**");
        break;
                }
        //return 0;
    }
    
