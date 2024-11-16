#include <stdio.h>

// Function prototype
void stringReverse(const char str[], int index);

int main() {
    // Example string
    char str[] = "Hello, World!";

    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    stringReverse(str, 0); // Start from the first character
    printf("\n");

    return 0;
}

// Recursive function to print a string backward
void stringReverse(const char str[], int index) {
    if (str[index] == '\0') {
        return; // Base case: end of string
    }

    // Recursive call to process the next character
    stringReverse(str, index + 1);

    // Print the current character after returning from recursion
    putchar(str[index]);
}
