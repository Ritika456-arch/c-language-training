#include<stdio.h>
int main()
{
    int arr[5] = {12, 45, 7, 89, 23};
    int n= 5;
    int *ptr = arr; // Pointer to the first element of the array

    printf("Array elements using pointer:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); // Accessing array elements using pointer arithmetic
    }
    
    return 0;
}