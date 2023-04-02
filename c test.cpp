#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    printf("The characters of the string in reverse order are: ");

    for (i = length - 1; i >= 0; i--) {
        printf("%c ", str[i]);
    }

    printf("\n");

    return 0;
}
 
