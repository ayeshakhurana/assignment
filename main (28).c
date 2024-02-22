//write a code to getthe largest element of an array using recurssion
#include <stdio.h>

int findLargest(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int max = findLargest(arr, n - 1);
    return (max > arr[n - 1]) ? max : arr[n - 1];
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Largest element in the array: %d\n", findLargest(arr, n));

    return 0;
}
