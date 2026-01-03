//write a program to dynamically allocate a memory for storing 4 integers. Take numbers from user, store them in allocated memory
//then increase the size by 2 and generate the sum of all 6 numbers.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    int i,s=0;
    p=(int *)malloc(4 * sizeof(int));
    
    printf("Enter 4 integers: ");
    for (i = 0; i < 4; i++) {
        scanf("%d", &p[i]);
        s+=p[i];
    }

    p=(int *)realloc(p, 6 * sizeof(int));
    printf("Enter 2 more integers: ");
    for (i = 4; i < 6; i++) {
        scanf("%d", &p[i]);
        s+=p[i];
    }
    printf("Sum of all 6 numbers = %d\n", s);
    free(p);
    return 0;
}

