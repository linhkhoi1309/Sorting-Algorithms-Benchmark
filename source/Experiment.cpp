#include "Experiment.h"

void conductExperiment()
{
    int data_orders[4]{0, 1, 2, 3};
    int data_sizes[6]{10000, 30000, 50000, 100000, 300000, 500000};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int *arr = new int[data_sizes[j]];
            int *tmpArr = new int[data_sizes[j]];
            long long count_compare;
            double measure_time;

            cout << "Data order: ";

            if (i == 0)
            {
                cout << "Sorted data" << endl;
                GenerateSortedData(arr, data_sizes[j]);
            }
            else if (i == 1)
            {
                cout << "Nearly sorted data" << endl;
                GenerateNearlySortedData(arr, data_sizes[j]);
            }
            else if (i == 2)
            {
                cout << "Reverse sorted data" << endl;
                GenerateReverseData(arr, data_sizes[j]);
            }
            else if (i == 3)
            {
                cout << "Randomized data" << endl;
                GenerateRandomData(arr, data_sizes[j]);
            }

            cout << "Data size: " << data_sizes[j] << endl;
            
            // Selection sort
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            measure_time = measureSelectionSort(tmpArr, data_sizes[j]);
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            selectionSort(tmpArr, data_sizes[j], count_compare);

            cout << "Selection sort" << endl;
            cout << "Number of comparisons: " << count_compare << endl;
            cout << "Running time: " << measure_time << " ms" << endl;

            // Insertion sort
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            measure_time = measureInsertionSort(tmpArr, data_sizes[j]);
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            insertionSort(tmpArr, data_sizes[j], count_compare);

            cout << "Insertion sort" << endl;
            cout << "Number of comparisons: " << count_compare << endl;
            cout << "Running time: " << measure_time << " ms" << endl;

            // Bubble sort
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            measure_time = measureBubbleSort(tmpArr, data_sizes[j]);
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            bubbleSort(tmpArr, data_sizes[j], count_compare);

            cout << "Bubble sort" << endl;
            cout << "Number of comparisons: " << count_compare << endl;
            cout << "Running time: " << measure_time << " ms" << endl;

            // Shaker sort
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            measure_time = measureShakerSort(tmpArr, data_sizes[j]);
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            shakerSort(tmpArr, data_sizes[j], count_compare);

            cout << "Shaker sort" << endl;
            cout << "Number of comparisons: " << count_compare << endl;
            cout << "Running time: " << measure_time << " ms" << endl;

            // Shell sort
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            measure_time = measureShellSort(tmpArr, data_sizes[j]);
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            shellSort(tmpArr, data_sizes[j], count_compare);

            cout << "Shell sort" << endl;
            cout << "Number of comparisons: " << count_compare << endl;
            cout << "Running time: " << measure_time << " ms" << endl;

            // Heap sort
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            measure_time = measureHeapSort(tmpArr, data_sizes[j]);
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            heapSort(tmpArr, data_sizes[j], count_compare);

            cout << "Heap sort" << endl;
            cout << "Number of comparisons: " << count_compare << endl;
            cout << "Running time: " << measure_time << " ms" << endl;

            // Merge sort
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            measure_time = measureMergeSort(tmpArr, data_sizes[j]);
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            count_compare = 0;
            mergeSort(tmpArr, 0, data_sizes[j] - 1, count_compare);

            cout << "Merge sort" << endl;
            cout << "Number of comparisons: " << count_compare << endl;
            cout << "Running time: " << measure_time << " ms" << endl;

            // Quick sort
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            measure_time = measureQuickSort(tmpArr, data_sizes[j]);
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            count_compare = 0;
            quickSort(tmpArr, 0, data_sizes[j] - 1, count_compare);

            cout << "Quick sort" << endl;
            cout << "Number of comparisons: " << count_compare << endl;
            cout << "Running time: " << measure_time << " ms" << endl;

            // Counting sort
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            measure_time = measureCountingSort(tmpArr, data_sizes[j]);
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            countingSort(tmpArr, data_sizes[j], count_compare);

            cout << "Counting sort" << endl;
            cout << "Number of comparisons: " << count_compare << endl;
            cout << "Running time: " << measure_time << " ms" << endl;

            // Radix sort
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            measure_time = measureRadixSort(tmpArr, data_sizes[j]);
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            radixSort(tmpArr, data_sizes[j], count_compare);

            cout << "Radix sort" << endl;
            cout << "Number of comparisons: " << count_compare << endl;
            cout << "Running time: " << measure_time << " ms" << endl;

            // Flash sort
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            measure_time = measureFlashSort(tmpArr, data_sizes[j]);
            for (int k = 0; k < data_sizes[j]; k++)
                tmpArr[k] = arr[k];
            flashSort(tmpArr, data_sizes[j], count_compare);

            cout << "Flash sort" << endl;
            cout << "Number of comparisons: " << count_compare << endl;
            cout << "Running time: " << measure_time << " ms" << endl;

            cout << "-------------------------" << endl;

            delete[] arr;
            delete[] tmpArr;
        }
    }
}
