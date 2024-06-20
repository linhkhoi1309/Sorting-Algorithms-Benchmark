#include "Sort.h"

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // Swap the smallest entry, arr[minIdx] with arr[i]
        swap(arr[i], arr[min_idx]);
    }
}
void selectionSort(int arr[], int n, long long &count_compare)
{
    count_compare = 0;
    for (int i = 0;++count_compare && i < n - 1; ++i)
    {
        int min_idx = i;
        for (int j = i + 1;++count_compare && j < n; ++j)
        {
            if (++count_compare && arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        swap(arr[i], arr[min_idx]);
    }
}
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        // Find the right position in the sorted region arr[0..i-1] for arr[i]; shift, if necessary, to make room
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void insertionSort(int arr[], int n, long long &count_compare)
{
    count_compare = 0;
    for (int i = 1;++count_compare && i < n; ++i)
    {
        // Find the right position in the sorted region arr[0..i-1] for arr[i]; shift, if necessary, to make room
        int key = arr[i];
        int j = i - 1;
        while (++count_compare && j >= 0 && ++count_compare && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void bubbleSort(int arr[], int n, long long &count_compare)
{
    count_compare = 0;
    for (int i = 0;++count_compare && i < n - 1; ++i)
    {
        // Last i elements are already in place
        for (int j = 0;++count_compare && j < n - i - 1; ++j)
        {
            if (++count_compare && arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

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
        for (int j = right; ++count_compare && j >= left; --j)
            if (++count_compare && arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                k = j;
            }
        left = k + 1;
        for (int j = left; ++count_compare && j <= right; ++j)
            if (++count_compare && arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                k = j;
            }
        right = k - 1;
    } while (++count_compare && left <= right);
}

void heapify(int start, int arr[], int n)
{
    int leftChild = 2 * start + 1;
    if (leftChild >= n)
        return;
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

void heapify(int start, int arr[], int n, long long &count_compare)
{
    int leftChild = 2 * start + 1;
    if (++count_compare && leftChild >= n)
        return;
    int largerChild = leftChild;
    int rightChild = 2 * start + 2;
    if (++count_compare && rightChild < n)
    {
        if (++count_compare && arr[rightChild] > arr[largerChild])
            largerChild = rightChild;
    }
}

void heapSort(int arr[], int n, long long &count_compare)
{
    count_compare = 0;
    for (int index = (n - 1) / 2; ++count_compare && index >= 0; index--)
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
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
}

void shellSort(int arr[], int n, long long &count_compare)
{
    for (int gap = n / 2; ++count_compare && gap > 0; gap /= 2)
    {
        for (int i = gap; ++count_compare && i < n; i += 1)
        {
            int temp = arr[i];
            int j;
            for (j = i; ++count_compare && j >= gap && ++count_compare && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
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
    while (++count_compare && (first1 <= last1) && ++count_compare && (first2 <= last2))
    {
        if (++count_compare && arr[first1] <= arr[first2])
            tempArr[index++] = arr[first1++];
        else
            tempArr[index++] = arr[first2++];
    }
    while (++count_compare && first1 <= last1)
        tempArr[index++] = arr[first1++];
    while (++count_compare && first2 <= last2)
        tempArr[index++] = arr[first2++];
    for (index = first; ++count_compare && index <= last; ++index)
        arr[index] = tempArr[index];
}

void mergeSort(int arr[], int first, int last, long long &count_compare)
{
    if (++count_compare && first < last)
    {
        int mid = (first + last) / 2;
        mergeSort(arr, first, mid, count_compare);
        mergeSort(arr, mid + 1, last, count_compare);
        merge(arr, first, mid, last, count_compare);
    }
}

void quickSort(int arr[], int first, int last)
{
    int pivot = arr[(first + last) / 2];
    int i = first, j = last;
    do
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (first < j)
        quickSort(arr, first, j);
    if (i < last)
        quickSort(arr, i, last);
}

void quickSort(int arr[], int first, int last, long long &count_compare)
{
    count_compare = 0;
    int pivot = arr[(first + last) / 2];
    int i = first, j = last;
    do
    {
        count_compare++;
        while (++count_compare && arr[i] < pivot)
        {
            i++;
        }
        while (++count_compare && arr[j] > pivot)
        {
            j--;
        }
        if (++count_compare && i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (++count_compare && first < j)
    {
        quickSort(arr, first, j, count_compare);
    }
    if (++count_compare && i < last)
    {
        quickSort(arr, i, last, count_compare);
    }
}

void countingSort(int arr[], int n)
{
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    int *f = new int[maxVal + 1];
    for (int i = 0; i < n; i++)
    {
        f[arr[i]]++;
    }
    for (int i = 1; i <= maxVal; i++)
    {
        f[i] = f[i - 1] + f[i];
    }
    int *temp = new int[n];
    for (int j = n - 1; j >= 0; j--)
    {
        temp[f[arr[j]] - 1] = arr[j];
        f[arr[j]]--;
    }
    for (int h = 0; h < n; h++)
    {
        arr[h] = temp[h];
    }
    delete[] f;
    delete[] temp;
}

void countingSort(int arr[], int n, long long &count_compare)
{
    count_compare = 0;
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        ++count_compare;
        if (++count_compare && arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    ++count_compare;
    int *f = new int[maxVal + 1];
    for (int i = 0; i < n; i++)
    {
        ++count_compare;
        f[arr[i]]++;
    }
    ++count_compare;
    for (int i = 1; i <= maxVal; i++)
    {
        ++count_compare;
        f[i] = f[i - 1] + f[i];
    }
    ++count_compare;
    int *temp = new int[n];
    for (int j = n - 1; j >= 0; j--)
    {
        ++count_compare;
        temp[f[arr[j]] - 1] = arr[j];
        f[arr[j]]--;
    }
    ++count_compare;
    for (int h = 0; h < n; h++)
    {
        ++count_compare;
        arr[h] = temp[h];
    }
    ++count_compare;
    delete[] f;
    delete[] temp;
}

void radixSort(int arr[], int n)
{
    int maxVal = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    int digits = 0;
    int div;
    do
    {
        digits++;
        div = maxVal / pow(10, digits);
    } while (div > 0);

    int *tempArr[10];
    for (int i = 0; i < 10; i++)
    {
        tempArr[i] = new int[n];
    }
    int tempCount[10];
    for (int i = 0; i < digits; ++i)
    {
        int exp = pow(10, i);
        for (int j = 0; j < 10; ++j)
        {
            tempCount[j] = 0;
        }

        for (int j = 0; j < n; ++j)
        {
            int idx = (arr[j] / exp) % 10;
            tempArr[idx][tempCount[idx]++] = arr[j];
        }
        int idx = 0;
        for (int j = 0; j < 10; ++j)
        {
            for (int k = 0; k < tempCount[j]; ++k)
            {
                arr[idx++] = tempArr[j][k];
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        delete[] tempArr[i];
    }
}

void radixSort(int arr[], int n, long long &count_compare)
{
    count_compare = 0;
    int maxVal = arr[0];
    for (int i = 1; i < n; ++i)
    {
        ++count_compare;
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    ++count_compare;
    int digits = 0;
    int div;
    do
    {
        ++count_compare;
        digits++;
        div = maxVal / pow(10, digits);
    } while (div > 0);

    int *tempArr[10];
    for (int i = 0; i < 10; i++)
    {
        ++count_compare;
        tempArr[i] = new int[n];
    }
    ++count_compare;
    int tempCount[10];
    for (int i = 0; i < digits; ++i)
    {
        ++count_compare;
        int exp = pow(10, i);
        for (int j = 0; j < 10; ++j)
        {
            ++count_compare;
            tempCount[j] = 0;
        }
        ++count_compare;
        for (int j = 0; j < n; ++j)
        {
            ++count_compare;
            int idx = (arr[j] / exp) % 10;
            tempArr[idx][tempCount[idx]++] = arr[j];
        }
        ++count_compare;
        int idx = 0;
        for (int j = 0; j < 10; ++j)
        {
            ++count_compare;
            for (int k = 0; k < tempCount[j]; ++k)
            {
                ++count_compare;
                arr[idx++] = tempArr[j][k];
            }
            ++count_compare;
        }
        ++count_compare;
    }
    ++count_compare;
    for (int i = 0; i < 10; i++)
    {
        delete[] tempArr[i];
    }
}

void flashSort(int arr[], int n)
{
    int minVal = arr[0];
    int maxInd = 0;
    int m = int(0.45 * n);
    int *l = new int[m];
    for (int i = 0; i < m; i++)
        l[i] = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
            minVal = arr[i];
        if (arr[i] > arr[maxInd])
            maxInd = i;
    }
    if (arr[maxInd] == minVal)
        return;

    double c1 = (double)(m - 1) / (arr[maxInd] - minVal);
    for (int i = 0; i < n; i++)
    {
        int k = int(c1 * (arr[i] - minVal));
        ++l[k];
    }
    for (int i = 1; i < m; i++)
        l[i] += l[i - 1];

    swap(arr[maxInd], arr[0]);
    int nmove = 0;
    int j = 0;
    int k = m - 1;
    int flash;
    while (nmove < n - 1)
    {
        while (j > l[k] - 1)
        {
            j++;
            k = int(c1 * (arr[j] - minVal));
        }
        flash = arr[j];
        if (k < 0)
            break;
        while (j != l[k])
        {
            k = int(c1 * (flash - minVal));
            --l[k];
            swap(flash, arr[l[k]]);
            ++nmove;
        }
    }

    insertionSort(arr, n);

    delete[] l;
}

void flashSort(int arr[], int n, long long &count_compare)
{
    int minVal = arr[0];
    int maxInd = 0;
    int m = int(0.45 * n);
    int *l = new int[m];
    for (int i = 0; i < m; i++)
    {
        ++count_compare;
        l[i] = 0;
    }
    ++count_compare;
    for (int i = 1; i < n; i++)
    {
        ++count_compare;
        if (++count_compare && arr[i] < minVal)
        {
            minVal = arr[i];
        }
        if (++count_compare && arr[i] > arr[maxInd])
        {
            maxInd = i;
        }
    }
    ++count_compare;
    if (++count_compare && arr[maxInd] == minVal)
        return;

    double c1 = (double)(m - 1) / (arr[maxInd] - minVal);
    for (int i = 0; i < n; i++)
    {
        ++count_compare;
        int k = int(c1 * (arr[i] - minVal));
        ++l[k];
    }
    ++count_compare;
    for (int i = 1; i < m; i++)
    {
        ++count_compare;
        l[i] += l[i - 1];
    }
    ++count_compare;
    swap(arr[maxInd], arr[0]);
    int nmove = 0;
    int j = 0;
    int k = m - 1;
    int flash;
    while (++count_compare && nmove < n - 1)
    {
        while (++count_compare && j > l[k] - 1)
        {
            j++;
            k = int(c1 * (arr[j] - minVal));
        }
        flash = arr[j];
        if (++count_compare && k < 0)
            break;
        while (++count_compare && j != l[k])
        {
            k = int(c1 * (flash - minVal));
            --l[k];
            swap(flash, arr[l[k]]);
            ++nmove;
        }
    }
    long long count_temp = 0;
    insertionSort(arr, n, count_temp);
    count_compare += count_temp;
    delete[] l;
}
