#include <stdio.h>

// Function prototype
int recursiveMaximum(const int array[], int size);

int main() {
    // Example array
    int array[] = { 3, 5, 7, 2, 8, 6, 4, 10, 1 };
    int size = sizeof(array) / sizeof(array[0]);

    // Find and display the maximum value
    int max = recursiveMaximum(array, size);
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}

// Recursive function to find the maximum value in an array
int recursiveMaximum(const int array[], int size) {
    // Base case: if the array has only one element, return it
    if (size == 1) {
        return array[0];
    }

    // Recursive step: find the maximum in the rest of the array
    int max_of_rest = recursiveMaximum(array, size - 1);

    // Compare the last element with the maximum of the rest
    return (array[size - 1] > max_of_rest) ? array[size - 1] : max_of_rest;
}
