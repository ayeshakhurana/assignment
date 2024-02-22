//write a code to input n elemets in an array and print sum of allelements present at odd indexes 
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

    int sum = 0;
    for (int i = 1; i < n; i += 2) {
        sum += arr[i];
    }

    printf("Sum of elements at odd indexes: %d\n", sum);

    return 0;
}
