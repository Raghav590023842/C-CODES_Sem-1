//Write a program in c to count the total number of alphabets, digits and special characters in string.

#include <stdio.h>

int main() {
    char str[200];
    int i, alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, 200, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        }
        
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        
        else if (str[i] != ' ' && str[i] != '\n') {
            special++;
        }
    }

    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special characters: %d\n", special);

    return 0;
}

