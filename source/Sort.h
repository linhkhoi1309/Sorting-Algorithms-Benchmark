#pragma once
#include<iostream>
#include <algorithm> 
#include <cmath>

using namespace std;


void selectionSort(int arr[], int n);
void selectionSort(int arr[], int n, long long& count_compare);

void insertionSort(int arr[], int n);
void insertionSort(int arr[], int n, long long& count_compare);

void bubbleSort(int arr[], int n);
void bubbleSort(int arr[], int n, long long& count_compare);

void shakerSort(int arr[], int n);
void shakerSort(int arr[], int n, long long& count_compare);

void shellSort(int arr[], int n);
void shellSort(int arr[], int n, long long& count_compare);

void heapSort(int arr[], int n);
void heapSort(int arr[], int n, long long& count_compare);

void mergeSort(int arr[], int n);
void mergeSort(int arr[], int n, long long& count_compare);

void quickSort(int arr[], int first, int last);
void quickSort(int arr[], int first, int last, long long& count_compare);

void countingSort(int arr[], int n);
void countingSort(int arr[], int n, long long& count_compare);

void radixSort(int arr[], int n);
void radixSort(int arr[], int n, long long& count_compare);

void flashSort(int arr[], int n);
void flashSort(int arr[], int n, long long& count_compare);
