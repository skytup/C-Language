#include <stdio.h>

// Function to merge three sorted arrays
void mergeThreeSortedArrays(int arr1[], int m, int arr2[], int n, int arr3[], int o, int result[]) {
    int i = 0, j = 0, k = 0, l = 0;

    // Merge three sorted arrays
    while (i < m && j < n && k < o) {
        if (arr1[i] <= arr2[j] && arr1[i] <= arr3[k]) {
            result[l++] = arr1[i++];
        } else if (arr2[j] <= arr1[i] && arr2[j] <= arr3[k]) {
            result[l++] = arr2[j++];
        } else {
            result[l++] = arr3[k++];
        }
    }

    // Copy remaining elements from arr1, if any
    while (i < m) {
        result[l++] = arr1[i++];
    }

    // Copy remaining elements from arr2, if any
    while (j < n) {
        result[l++] = arr2[j++];
    }

    // Copy remaining elements from arr3, if any
    while (k < o) {
        result[l++] = arr3[k++];
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Driver code
int main() {
    int arr1[] = {1, 3, 5};
    int m = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {0, 7, 8};
    int o = sizeof(arr3) / sizeof(arr3[0]);

    int result[m + n + o];
    mergeThreeSortedArrays(arr1, m, arr2, n, arr3, o, result);

    printf("Merged array: ");
    printArray(result, m + n + o);

    return 0;
}