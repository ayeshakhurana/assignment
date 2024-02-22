//write a code to input n elements in an array and replace evene numbers with their squares and odd numbers with their cubes 
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] * arr[i];
        } else {
            arr[i] = arr[i] * arr[i] * arr[i];
        }
    }

    printf("Array after replacement:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
