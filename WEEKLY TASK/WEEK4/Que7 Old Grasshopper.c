#include<stdlib.h>
#include<stdio.h>
int pos(int x, int n){
    int jump = n % 4,f = x;
    for(int i=1; i<=jump;i++){
        if(f&1){
            f += n-jump+i;
        }
        else{
            f-= n-jump+i;
        }
    }
    return f;
}
int main(){
    
    int a;
    long x,n,b;
    scanf("%d",&a);
    while(a--){
        scanf("%d%d",&x,&n);
        b=pos(x,n);
        printf("%d",b);
    }
    
    return 0;

}