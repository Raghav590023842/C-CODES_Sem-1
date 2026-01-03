//Write a program in c to count the total number of alphabets, digits and special characters in string using functions.

#include <stdio.h>
int countAlphabets(char str[]) {
    int i, alphabets = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        }
    }
    return alphabets;
}

int countDigits(char str[]) {
    int i, digits = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
    }
    return digits;
}

int countSpecial(char str[]) {
    int i, special = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || 
              (str[i] >= 'a' && str[i] <= 'z') || 
              (str[i] >= '0' && str[i] <= '9') || 
              str[i] == ' ' || str[i] == '\n')) {
            special++;
        }
    }
    return special;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, 200, stdin);

    int alphabets = countAlphabets(str);
    int digits = countDigits(str);
    int special = countSpecial(str);

    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special characters: %d\n",special);

    return 0;
}

