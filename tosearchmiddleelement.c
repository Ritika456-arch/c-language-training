#include <stdio.h>
int main() {
    int arr[];  {10,20,30,40,50,60 };
    int n = 7;
    int key = 60;
    int result = binarySearch(arr, 0, n - 1, key);

    if result == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index: %d\n", result);
    return 0;
}