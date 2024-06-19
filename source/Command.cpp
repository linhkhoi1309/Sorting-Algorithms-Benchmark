#include "Command.h"

double measureTime(int *arr, int n, void (*sortingFunc)(int *, int))
{
    clock_t start, end;
    start = clock();
    sortingFunc(arr, n);
    end = clock();
    return (end - start) / (CLOCKS_PER_SEC / 1000);
}

double measureTime(int *arr, int n, void (*sortingFunc)(int *, int, int))
{
    clock_t start, end;
    start = clock();
    sortingFunc(arr, 0, n - 1);
    end = clock();
    return (end - start) / (CLOCKS_PER_SEC / 1000);
}