//find the longest word in a sentence.

#include <stdio.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxlen = 0;

    printf("Enter a sentence: ");
    fgets(str, 200, stdin);

    while (str[i] != '\0') {
        
        if (str[i] != ' ' && str[i] != '\n') {
            word[j] = str[i];
            j++;
        } else {
            word[j] = '\0';  
            if (j > maxlen) { 
                maxlen = j;
                int k;
                for(k = 0; k <= j; k++) {
                    longest[k] = word[k]; 
                }
            }
            j = 0;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}

