#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a string
void reverse_string(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Function to convert string to uppercase
void to_uppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

// Function to convert string to lowercase
void to_lowercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

// Function to count vowels in string
int count_vowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count words in string
int count_words(char str[]) {
    int count = 0;
    int in_word = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            count++;
        }
    }
    return count;
}

// Function to check if string is palindrome
int is_palindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (tolower(str[i]) != tolower(str[length - i - 1])) {
            return 0;
        }
    }
    return 1;
}

// Function to remove spaces from string
void remove_spaces(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

// Function to count character frequency
void character_frequency(char str[]) {
    int frequency[256] = {0};
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            frequency[(int)str[i]]++;
        }
    }
    
    printf("Character frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("'%c' : %d times\n", i, frequency[i]);
        }
    }
}

int main() {
    char input[1000];
    char temp[1000];
    int choice;
    
    printf("=== String Operations Program ===\n\n");
    
    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Reverse string\n");
        printf("2. Convert to UPPERCASE\n");
        printf("3. Convert to lowercase\n");
        printf("4. Count vowels\n");
        printf("5. Count words\n");
        printf("6. Check palindrome\n");
        printf("7. Remove spaces\n");
        printf("8. Character frequency\n");
        printf("9. Exit\n");
        printf("Enter your choice (1-9): ");
        
        scanf("%d", &choice);
        getchar(); // Clear newline from buffer
        
        if (choice == 9) {
            printf("Goodbye!\n");
            break;
        }
        
        if (choice < 1 || choice > 9) {
            printf("Invalid choice! Please try again.\n");
            continue;
        }
        
        printf("Enter a string: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; // Remove newline
        
        // Create a temporary copy for operations that modify the string
        strcpy(temp, input);
        
        switch (choice) {
            case 1:
                reverse_string(temp);
                printf("Reversed string: %s\n", temp);
                break;
                
            case 2:
                to_uppercase(temp);
                printf("Uppercase: %s\n", temp);
                break;
                
            case 3:
                to_lowercase(temp);
                printf("Lowercase: %s\n", temp);
                break;
                
            case 4:
                printf("Number of vowels: %d\n", count_vowels(temp));
                break;
                
            case 5:
                printf("Number of words: %d\n", count_words(temp));
                break;
                
            case 6:
                if (is_palindrome(temp)) {
                    printf("The string is a palindrome!\n");
                } else {
                    printf("The string is NOT a palindrome.\n");
                }
                break;
                
            case 7:
                remove_spaces(temp);
                printf("Without spaces: %s\n", temp);
                break;
                
            case 8:
                character_frequency(temp);
                break;
        }
    }
    
    return 0;
}
