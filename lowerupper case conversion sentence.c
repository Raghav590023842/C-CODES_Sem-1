//write a program in c to read a sentence and replace lowercase characters with uppercase and vice-versa.

#include <stdio.h>

int main() {
    char sentence[100];
    printf("Enter a sentence:");
    fgets(sentence, 100, stdin);
	int i;
    for (i = 0; sentence[i] != '\0'; i++) {
        
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] -= 32; 
        } 
        
        else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            sentence[i] += 32; 
        }
        
    }

    printf("Modified sentence:\n%s", sentence);
    return 0;
}

