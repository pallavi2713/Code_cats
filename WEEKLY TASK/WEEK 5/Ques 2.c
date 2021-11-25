#include <stdio.h>
 
int main()
{
    int arr[] = {1, 2 ,3};
    int *ptr = arr;
 
    char ar[] = {1, 2 ,3};
    char *pt = ar;
 
    printf("sizeof ar[] = %d\n ", sizeof(ar));
    printf("sizeof pt = %d \n", sizeof(pt));
 
    printf("sizeof arr[] = %d \n", sizeof(arr));
    printf("sizeof ptr = %d \n", sizeof(ptr));
 
    return 0;
}