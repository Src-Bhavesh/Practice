#include <iostream>
#include <algorithm> // Required for std::sort()
#include <vector>    // Or use a C-style array

int main() {
    // Example with a C-style array
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    std::sort(arr, arr + n); // Sorts the array in ascending order

    std::cout << "Sorted array (ascending): ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
}