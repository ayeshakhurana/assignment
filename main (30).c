//write a code to check the number of elementsin an array that are palindromes
#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return originalNum == reversedNum;
}

int countPalindromeElements(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }
    return count;
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

    int palindromeCount = countPalindromeElements(arr, n);
    printf("Number of palindrome elements in the array: %d\n", palindromeCount);

    return 0;
}
