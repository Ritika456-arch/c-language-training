#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    //Dynamically allocate memory
    int *arr = (int *)malloc(n*sizeof(int));

    //check wheather memory allocation was successful
    if (arr==NULL){
        printf("Memory allocatin failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n",n);

    for(int i = 0;i<n;i++){
        printf("%d",*(arr+1));
    }
    // Realese dynamically allocated memory
    free(arr);

    return 0;

}
