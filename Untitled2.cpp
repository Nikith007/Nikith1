#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];

    printf("Enter a string to copy: ");
    scanf("%s", source);

    strcpy(destination, source);

    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);

    return 0;
}

