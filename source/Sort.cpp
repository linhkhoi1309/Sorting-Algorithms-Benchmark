#include "Sort.h"
#include "Sort.h"

using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        //At this point, arr[0..i-1] is sorted, and its entries are smaller than those in arr[i..n-1].
        int min_idx = i;
        // Select the smallest entry in arr[i..n-1]
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the smallest entry, arr[minIdx] with arr[i]
        swap(arr[i], arr[min_idx]);
    }
}
void selectionSort(int arr[], int n, long long& count_compare) {
    count_compare = 0;
    for (int i = 0; i < n - 1; ++i) {
        //At this point, arr[0..i-1] is sorted, and its entries are smaller than those in arr[i..n-1].
        int min_idx = i;
        // Select the smallest entry in arr[i..n-1]
        for (int j = i + 1; j < n; ++j) {
            if (++count_compare && arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the smallest entry, arr[minIdx] with arr[i]
        swap(arr[i], arr[min_idx]);
    }
}
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        // Find the right position in the sorted region arr[0..i-1] for arr[i]; shift, if necessary, to make room
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void insertionSort(int arr[], int n, long long& count_compare) {
    count_compare = 0;
    for (int i = 1; i < n; ++i) {
        // Find the right position in the sorted region arr[0..i-1] for arr[i]; shift, if necessary, to make room
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && ++count_compare && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void bubbleSort(int arr[], int n, long long& count_compare) {
    count_compare = 0;
    for (int i = 0; i < n - 1; ++i) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; ++j) {
            if (++count_compare && arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

