#include<stdio.h>
#include<math.h>
int main(){
int d,b,a,c;
int root1,root2;

printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%d%d%d", &a, &b, &c);
    d = pow(b,2)-4*a*c;
printf("D= %d\n\n",d);
if(d>0){
     root1= (-1*b + d)/2*a;
     root2= (-1*b -d)/2*a;
    printf("Roots of the given equation are %d and  %d",root1,root2);
}
else if(d==0){

     root1 = root2 = -1*b/2*a;
    
     printf("Two equal and real roots exists: %d and %d", root1, root2);
    
}
else if(d < 0)
    { 
    
        root1 = root2 = -b / (2 * a);
       int i = sqrt(-d) / (2 * a);

        printf("Two distinct complex roots exists: %d + %di and %d - %di", root1, i, root2, i);
    }

    return 0;
}




