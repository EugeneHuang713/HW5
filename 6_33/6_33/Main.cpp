#include <stdio.h>

// Function prototype
int binarySearch(const int array[], int start, int end, int key);

int main() {
    // Example sorted array
    int array[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    // Get the search key from the user
    printf("Enter a number to search: ");
    scanf("%d", &key);

    // Perform binary search
    int result = binarySearch(array, 0, size - 1, key);

    // Output the result
    if (result != -1) {
        printf("Key %d found at index %d.\n", key, result);
    }
    else {
        printf("Key %d not found.\n", key);
    }

    return 0;
}

// Recursive binary search function
int binarySearch(const int array[], int start, int end, int key) {
    if (start > end) {
        return -1; // Key not found
    }

    int mid = start + (end - start) / 2; // Avoid overflow

    if (array[mid] == key) {
        return mid; // Key found
    }
    else if (array[mid] > key) {
        return binarySearch(array, start, mid - 1, key); // Search left sub-array
    }
    else {
        return binarySearch(array, mid + 1, end, key); // Search right sub-array
    }
}
