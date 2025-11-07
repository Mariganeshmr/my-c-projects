#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, start, end, step;
    
    printf("=== Enhanced Number Printer ===\n");
    printf("1. Print numbers with custom range\n");
    printf("2. Print even numbers only\n");
    printf("3. Print odd numbers only\n");
    printf("4. Print numbers in reverse\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter starting number: ");
            scanf("%d", &start);
            printf("Enter ending number: ");
            scanf("%d", &end);
            printf("Enter step: ");
            scanf("%d", &step);
            
            printf("\nNumbers from %d to %d with step %d:\n", start, end, step);
            for(int i = start; i <= end; i += step) {
                printf("%d.0\n", i);
            }
            break;
            
        case 2:
            printf("Printing even numbers from 1 to 400:\n");
            for(int i = 2; i <= 400; i += 2) {
                printf("%d.0\n", i);
            }
            break;
            
        case 3:
            printf("Printing odd numbers from 1 to 400:\n");
            for(int i = 1; i <= 400; i += 2) {
                printf("%d.0\n", i);
            }
            break;
            
        case 4:
            printf("Printing numbers in reverse from 400 to 1:\n");
            for(int i = 400; i >= 1; i--) {
                printf("%d.0\n", i);
            }
            break;
            
        default:
            printf("Invalid choice!\n");
            return 1;
    }
    
    printf("\nProgram completed successfully!\n");
    return 0;
}
