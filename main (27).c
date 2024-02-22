//write a code to count digits of a number using recurssion
#include <stdio.h>

int countDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1 + countDigits(n / 10);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of digits: %d\n", countDigits(num));

    return 0;
}
