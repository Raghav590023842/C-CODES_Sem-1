//Write a program in C to count the total number of words in a string using functions.

#include <stdio.h>
int countwords(char str[]) {
    int i = 0, words = 0;
    while (str[i] != '\0') {
        if (i == 0)  {
            words++;
        }
        i++;
    }

    return words;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int totalwords = countwords(str);
    printf("Total number of words = %d\n", totalwords);

    return 0;
}

