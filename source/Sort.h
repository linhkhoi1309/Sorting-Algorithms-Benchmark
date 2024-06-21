#pragma once
#include <algorithm> 
#include <time.h>
#include <cmath>

using namespace std;

void selectionSort(int arr[], int n);
void selectionSort(int arr[], int n, long long& count_compare);
double measureSelectionSort(int *arr, int n);

void insertionSort(int arr[], int n);
void insertionSort(int arr[], int n, long long& count_compare);
double measureInsertionSort(int *arr, int n);

void bubbleSort(int arr[], int n);
void bubbleSort(int arr[], int n, long long& count_compare);
double measureBubbleSort(int* arr, int n);

void shakerSort(int arr[], int n);
void shakerSort(int arr[], int n, long long& count_compare);
double measureShakerSort(int *arr, int n);

void shellSort(int arr[], int n);
void shellSort(int arr[], int n, long long& count_compare);
double measureShellSort(int *arr, int n);

void heapSort(int arr[], int n);
void heapSort(int arr[], int n, long long& count_compare);
double measureHeapSort(int *arr, int n);

void mergeSort(int arr[], int first, int last);
void mergeSort(int arr[], int first, int last, long long &count_compare);
double measureMergeSort(int *arr, int n);

void quickSort(int arr[], int first, int last);
void quickSort(int arr[], int first, int last, long long& count_compare);
double measureQuickSort(int *arr, int n);

void countingSort(int arr[], int n);
void countingSort(int arr[], int n, long long& count_compare);
double measureCountingSort(int *arr, int n);

void radixSort(int arr[], int n);
void radixSort(int arr[], int n, long long& count_compare);
double measureRadixSort(int *arr, int n);

void flashSort(int arr[], int n);
void flashSort(int arr[], int n, long long& count_compare);
double measureFlashSort(int *arr, int n);
