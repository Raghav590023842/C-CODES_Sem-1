//Write a function to receive base address of an integer array along with array size 8 an integer number lets say 'n' the function should increment
//all elements of array by n.

#include <stdio.h>
void func(int *arr, int size, int n) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] + n;
    }
}

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 5;
    func(arr, 8, n);
    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

