#include <stdio.h>

int main() {
    int arr[5];  
    int value, found = 0;
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the value to search for: ");
    scanf("%d", &value);

    // Search for the value in the array
    for (int i = 0; i < 5; i++) {
        if (arr[i] == value) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Value %d found in the array.\n", value);
    } else {
        printf("Value %d not found in the array.\n", value);
    }
    return 0;
}