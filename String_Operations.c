#include <stdio.h>
#include <string.h>

// Function to concatenate two strings
void concatenate(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);
}

// Function to reverse a string
void reverseString(char str[]) {
    int len = strlen(str);
    int i;
    char temp;
    for ( i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed String: %s\n", str);
}

// Function to check if a string is a palindrome
void checkPalindrome(char str[]) {
    int len = strlen(str);
    int flag = 1;
    int i;
    for ( i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

// Function to copy one string to another
void copyString(char source[], char destination[]) {
    strcpy(destination, source);
    printf("Copied String: %s\n", destination);
}

// Function to compare two strings
void compareStrings(char str1[], char str2[]) {
    int result = strcmp(str1, str2);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result > 0)
        printf("First string is greater than second.\n");
    else
        printf("First string is smaller than second.\n");
}

// Function to extract a substring from a given string
void extractSubstring(char str[], int pos, int length) {
    char substring[100];
    int i;
    for (i = 0; i < length && str[pos + i] != '\0'; i++) {
        substring[i] = str[pos + i];
    }
    substring[i] = '\0';
    printf("Extracted Substring: %s\n", substring);
}

int main() {
    char str1[100], str2[100], str3[100];
    int choice, pos, length;

    printf("Enter first string: ");
    gets(str1);

    printf("\nChoose an operation:\n");
    printf("1. Concatenation\n2. Reverse String\n3. Check Palindrome\n4. Copy String\n5. Compare Strings\n6. Extract Substring\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); // Clear newline character from buffer

    switch (choice) {
        case 1:
            printf("Enter second string: ");
            gets(str2);
            concatenate(str1, str2);
            break;
        case 2:
            reverseString(str1);
            break;
        case 3:
            checkPalindrome(str1);
            break;
        case 4:
            copyString(str1, str3);
            break;
        case 5:
            printf("Enter second string: ");
            gets(str2);
            compareStrings(str1, str2);
            break;
        case 6:
            printf("Enter position and length for substring extraction: ");
            scanf("%d %d", &pos, &length);
            extractSubstring(str1, pos, length);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

