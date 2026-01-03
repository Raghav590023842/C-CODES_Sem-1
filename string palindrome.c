//check if a string is palindrome.

#include <stdio.h>

int main() {
    char string[100], temp[100];
    int i, len = 0, pl = 1;

    printf("Enter string: ");
    fgets(string, 100, stdin);

	for(i = 0; string[i] != '\0'; i++) {
        if(string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }
    
    while(string[len] != '\0') {
        len++;
    }

    for(i = 0; i < len; i++) {
        temp[i] = string[len - i - 1];
    }
    temp[len] = '\0'; 

    for(i = 0; i < len; i++) {
        if(string[i] != temp[i]) {
            pl = 0;
            break;
        }
    }

    if(pl == 1)
        printf("It is a palindrome\n");
    else
        printf("It is not a palindrome\n");

    return 0;
}


