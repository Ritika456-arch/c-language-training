#include <stdio.h>

int main() {
    int arr[2];   // array to store the two numbers
    int sum = 0;

    // Input two numbers into the array
    printf("Enter first number: ");
    scanf("%d", &arr[0]);

    printf("Enter second number: ");
    scanf("%d", &arr[1]);

    // Sum using for loop
    for (int i = 0; i < 2; i++) {
        sum = sum + arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}