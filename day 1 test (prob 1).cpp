 #include <stdio.h>

int main() {
    int n, fact = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Cannot calculate factorial of a negative number.");
    } else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %d.", n, fact);
    }
    
    return 0;
}

