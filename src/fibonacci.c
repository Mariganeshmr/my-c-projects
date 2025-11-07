#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;
    
    printf("=== Fibonacci Sequence Generator ===\n");
    printf("Enter how many Fibonacci numbers to generate: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }
    
    printf("Fibonacci sequence: ");
    
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d", next);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
    
    return 0;
}
