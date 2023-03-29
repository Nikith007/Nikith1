#include <stdio.h>

int main() {
    int arr[10] = {4, 2, 8, 1, 5, 9, 3, 6, 7, 10};
    int i, max, min;

    max = arr[0];
    min = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The largest number in the array is: %d\n", max);
    printf("The smallest number in the array is: %d\n", min);

    return 0;
}

