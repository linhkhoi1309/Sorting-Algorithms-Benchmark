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
