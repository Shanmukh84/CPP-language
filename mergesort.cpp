#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];    // Using the element at the "high" index as the pivot (here, 15)
    int i = low - 1;          // i is initialized to one before the start of the subarray (i.e., -1)
    
    // Rearranging elements based on the pivot
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]); // Place the pivot in the correct position
    return i + 1;  // The pivot's final position is returned
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);   // Sort the elements on the left side of the pivot
        quicksort(arr, pi + 1, high);  // Sort the elements on the right side of the pivot
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {23, 12, 45, 5, 19, 30, 8, 15};  // An 8-element array
    int n = sizeof(arr) / sizeof(arr[0]);          // n becomes 8

    printf("Before sorting: ");
    printArray(arr, n);

    // For the whole array, low is 0 and high is n-1 (i.e., 7)
    quicksort(arr, 0, n - 1);

    printf("After sorting: ");
    printArray(arr, n);

    return 0;
}
