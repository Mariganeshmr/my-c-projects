#include <stdio.h>

int main() {
    printf("== Number Printer ==\n");
    printf("This program prints numbers from 1 to 400\n\n");

    // Print numbers from 1 to 400
    for(int i = 1; i <= 400; i++) {
        printf("%d.0\n", i);
    }

    printf("\nProgram completed successfully!\n");
    return 0;
}
