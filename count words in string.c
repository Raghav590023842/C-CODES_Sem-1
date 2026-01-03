//Write a program in C to count the total number of words in a string.

#include <stdio.h>

int main() {
    char str[200];
    int i, words = 0;

    printf("Enter a string: ");
    fgets(str, 200, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == ' ') {
            words++;
        }
    }

    if (strlen(str) > 0)
        words++;

    printf("Total number of words = %d\n", words);

    return 0;
}

