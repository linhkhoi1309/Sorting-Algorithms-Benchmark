#include "Sort.h"

void shakerSort(int arr[], int n)
{
    int left = 1, right = n - 1, k = n - 1;
    do
    {
        for (int j = right; j >= left; --j)
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                k = j;
            }
        left = k + 1;
        for (int j = left; j <= right; ++j)
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                k = j;
            }
        right = k - 1;
    } while (left <= right);
}

void shakerSort(int arr[], int n, long long &count_compare)
{
    count_compare = 0;
    int left = 1, right = n - 1, k = n - 1;
    do
    {
        for (int j = right; j >= left; --j)
            if (++count_compare && arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                k = j;
            }
        left = k + 1;
        for (int j = left; j <= right; ++j)
            if (++count_compare && arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                k = j;
            }
        right = k - 1;
    } while (left <= right);
}

void heapify(int start, int arr[], int n)
{
    int leftChild = 2 * start + 1;
    if (leftChild >= n) return;
    int largerChild = leftChild;
    int rightChild = 2 * start + 2;
    if (rightChild < n)
    {
        if (arr[rightChild] > arr[largerChild])
            largerChild = rightChild;
    }
}

void heapSort(int arr[], int n)
{
    for (int index = (n - 1) / 2; index >= 0; index--)
        heapify(index, arr, n);
    swap(arr[0], arr[n - 1]);
    int heapSize = n - 1;
    while (heapSize > 1)
    {
        heapify(0, arr, heapSize);
        heapSize--;
        swap(arr[0], arr[heapSize]);
    }
}


void heapify(int start, int arr[], int n, long long &count_compare){
    int leftChild = 2 * start + 1;
    if (leftChild >= n) return;
    int largerChild = leftChild;
    int rightChild = 2 * start + 2;
    if (rightChild < n)
    {
        if (++count_compare && arr[rightChild] > arr[largerChild])
            largerChild = rightChild;
    }
}

void heapSort(int arr[], int n, long long &count_compare)
{
    count_compare = 0;
    for (int index = (n - 1) / 2; index >= 0; index--)
        heapify(index, arr, n);
    swap(arr[0], arr[n - 1]);
    int heapSize = n - 1;
    while (heapSize > 1)
    {
        heapify(0, arr, heapSize, count_compare);
        heapSize--;
        swap(arr[0], arr[heapSize]);
    }
}

void shellSort(int arr[], int n)
{
}
void shellSort(int arr[], int n, long long &count_compare)
{
}

void merge(int arr[], int first, int mid, int last)
{
    int first1 = first, last1 = mid;
    int first2 = mid + 1, last2 = last;

    int tempArr[last + 1];
    int index = first1;
    while ((first1 <= last1) && (first2 <= last2))
    {
        if (arr[first1] <= arr[first2])
            tempArr[index++] = arr[first1++];
        else
            tempArr[index++] = arr[first2++];
    }
    while (first1 <= last1)
        tempArr[index++] = arr[first1++];
    while (first2 <= last2)
        tempArr[index++] = arr[first2++];
    for (index = first; index <= last; ++index)
        arr[index] = tempArr[index];
}

void mergeSort(int arr[], int first, int last)
{
    if (first < last)
    {
        int mid = (first + last) / 2;
        mergeSort(arr, first, mid);
        mergeSort(arr, mid + 1, last);
        merge(arr, first, mid, last);
    }
}

void merge(int arr[], int first, int mid, int last, long long &count_compare)
{
    int first1 = first, last1 = mid;
    int first2 = mid + 1, last2 = last;

    int tempArr[last + 1];
    int index = first1;
    while ((first1 <= last1) && (first2 <= last2))
    {
        if (++count_compare && arr[first1] <= arr[first2])
            tempArr[index++] = arr[first1++];
        else
            tempArr[index++] = arr[first2++];
    }
    while (first1 <= last1)
        tempArr[index++] = arr[first1++];
    while (first2 <= last2)
        tempArr[index++] = arr[first2++];
    for (index = first; index <= last; ++index)
        arr[index] = tempArr[index];
}

void mergeSort(int arr[], int first, int last, long long &count_compare)
{
    if (first < last)
    {
        int mid = (first + last) / 2;
        mergeSort(arr, first, mid, count_compare);
        mergeSort(arr, mid + 1, last, count_compare);
        merge(arr, first, mid, last, count_compare);
    }
}
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

