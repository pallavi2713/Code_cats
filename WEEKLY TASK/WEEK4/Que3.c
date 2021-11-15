#include<stdio.h>
#include<stdlib.h>


void reverseArray(int arr[], int start,
                            int end)
{
    while (start < end)
    { int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
//Right Rotation
void rightRotate(int arr[], int d, int n)
{
    reverseArray(arr, 0, n-1);
    reverseArray(arr, 0, d-1);
    reverseArray(arr, d, n-1);
}
 

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);
}
 

int main()
{
    int arr[] = {1, 2, 3, 4, 5,
                6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
     
     
     int k;
    printf("\nEnter the number of steps:");
    //printf("%d\n",n);
     scanf("%d",&k);
       printf("Array Before Rotation:");for(int i=0;i<n;i++){printf("%d ",arr[i]);}
    rightRotate(arr, k, n);
    printf("\nArray After Rotation: ");
    printArray(arr, n);
 
    return 0;
}