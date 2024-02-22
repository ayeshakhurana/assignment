//write a code to input 2 strings and compare them charachter by charachter
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, flag = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare each character of the strings
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; ++i) {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }

    // Check if the strings are equal or not
    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0') {
        printf("The strings are equal.\n");
    } else {
        printf("
