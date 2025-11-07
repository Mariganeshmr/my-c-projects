#include <stdio.h>
#include <math.h>

// Basic arithmetic functions
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { 
    if (b != 0) return a / b;
    else { printf("Error: Division by zero!\n"); return 0; }
}

// Scientific functions
double power(double base, double exponent) { return pow(base, exponent); }
double square_root(double num) { 
    if (num >= 0) return sqrt(num);
    else { printf("Error: Cannot square root negative number!\n"); return 0; }
}
double logarithm(double num) { 
    if (num > 0) return log(num);
    else { printf("Error: Logarithm of non-positive number!\n"); return 0; }
}
double sine(double angle) { return sin(angle * M_PI / 180.0); } // Convert to radians
double cosine(double angle) { return cos(angle * M_PI / 180.0); }
double tangent(double angle) { return tan(angle * M_PI / 180.0); }
double factorial(int n) {
    if (n < 0) return 0;
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int choice;
    double num1, num2, result;
    int int_num;
    
    printf("=== Scientific Calculator ===\n");
    
    while (1) {
        printf("\n=== Operations ===\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        printf("5. Power\n6. Square Root\n7. Logarithm\n8. Sine\n9. Cosine\n");
        printf("10. Tangent\n11. Factorial\n12. Exit\n");
        printf("Enter your choice (1-12): ");
        
        scanf("%d", &choice);
        
        if (choice == 12) {
            printf("Goodbye!\n");
            break;
        }
        
        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = divide(num1, num2);
                if (num2 != 0) printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = power(num1, num2);
                printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                result = square_root(num1);
                if (num1 >= 0) printf("Result: √%.2lf = %.2lf\n", num1, result);
                break;
                
            case 7:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                result = logarithm(num1);
                if (num1 > 0) printf("Result: ln(%.2lf) = %.2lf\n", num1, result);
                break;
                
            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = sine(num1);
                printf("Result: sin(%.2lf°) = %.2lf\n", num1, result);
                break;
                
            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = cosine(num1);
                printf("Result: cos(%.2lf°) = %.2lf\n", num1, result);
                break;
                
            case 10:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = tangent(num1);
                printf("Result: tan(%.2lf°) = %.2lf\n", num1, result);
                break;
                
            case 11:
                printf("Enter an integer: ");
                scanf("%d", &int_num);
                result = factorial(int_num);
                if (int_num >= 0) printf("Result: %d! = %.0lf\n", int_num, result);
                break;
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
