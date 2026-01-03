//write a program in c to read a sentence and replace lowercase characters with uppercase and vice-versa using functions.

#include <stdio.h>

void wcase(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; 
        } 
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; 
        }
    }
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    wcase(sentence);

    printf("Modified sentence:\n%s", sentence);

    return 0;
}

