#include "Command.h"

// Hàm dùng để tìm thuật toán sort theo tên và trả về số comparison và thời gian chạy tương ứng 
void findSortFuncAndCalculate(int *arr, int n, char algorithm[], char output_param[], long long &count_compare, double &time_measure)
{
    if (!strcmp(algorithm, "selection-sort"))
    {
        if (!strcmp(output_param, "-time"))
        {
            time_measure = measureSelectionSort(arr, n);
        }
        else if (!strcmp(output_param, "-comp"))
        {
            selectionSort(arr, n, count_compare);
        }
        else if (!strcmp(output_param, "-both"))
        {
            int *tmp = new int[n];
            for (int i = 0; i < n; i++)
                tmp[i] = arr[i];
            time_measure = measureSelectionSort(tmp, n);
            selectionSort(arr, n, count_compare);
            delete[] tmp;
        }
    }
    else if (!strcmp(algorithm, "insertion-sort"))
    {
        if (!strcmp(output_param, "-time"))
        {
            time_measure = measureInsertionSort(arr, n);
        }
        else if (!strcmp(output_param, "-comp"))
        {
            insertionSort(arr, n, count_compare);
        }
        else if (!strcmp(output_param, "-both"))
        {
            int *tmp = new int[n];
            for (int i = 0; i < n; i++)
                tmp[i] = arr[i];
            time_measure = measureInsertionSort(tmp, n);
            insertionSort(arr, n, count_compare);
            delete[] tmp;
        }
    }
    else if (!strcmp(algorithm, "bubble-sort"))
    {
        if (!strcmp(output_param, "-time"))
        {
            time_measure = measureBubbleSort(arr, n);
        }
        else if (!strcmp(output_param, "-comp"))
        {
            bubbleSort(arr, n, count_compare);
        }
        else if (!strcmp(output_param, "-both"))
        {
            int *tmp = new int[n];
            for (int i = 0; i < n; i++)
                tmp[i] = arr[i];
            time_measure = measureBubbleSort(tmp, n);
            bubbleSort(arr, n, count_compare);
            delete[] tmp;
        }
    }
    else if (!strcmp(algorithm, "shaker-sort"))
    {
        if (!strcmp(output_param, "-time"))
        {
            time_measure = measureShakerSort(arr, n);
        }
        else if (!strcmp(output_param, "-comp"))
        {
            shakerSort(arr, n, count_compare);
        }
        else if (!strcmp(output_param, "-both"))
        {
            int *tmp = new int[n];
            for (int i = 0; i < n; i++)
                tmp[i] = arr[i];
            time_measure = measureShakerSort(tmp, n);
            shakerSort(arr, n, count_compare);
            delete[] tmp;
        }
    }
    else if (!strcmp(algorithm, "shell-sort"))
    {
        if (!strcmp(output_param, "-time"))
        {
            time_measure = measureShellSort(arr, n);
        }
        else if (!strcmp(output_param, "-comp"))
        {
            shellSort(arr, n, count_compare);
        }
        else if (!strcmp(output_param, "-both"))
        {
            int *tmp = new int[n];
            for (int i = 0; i < n; i++)
                tmp[i] = arr[i];
            time_measure = measureShellSort(tmp, n);
            shellSort(arr, n, count_compare);
            delete[] tmp;
        }
    }
    else if (!strcmp(algorithm, "heap-sort"))
    {
        if (!strcmp(output_param, "-time"))
        {
            time_measure = measureHeapSort(arr, n);
        }
        else if (!strcmp(output_param, "-comp"))
        {
            heapSort(arr, n, count_compare);
        }
        else if (!strcmp(output_param, "-both"))
        {
            int *tmp = new int[n];
            for (int i = 0; i < n; i++)
                tmp[i] = arr[i];
            time_measure = measureHeapSort(tmp, n);
            heapSort(arr, n, count_compare);
            delete[] tmp;
        }
    }
    else if (!strcmp(algorithm, "merge-sort"))
    {
        if (!strcmp(output_param, "-time"))
        {
            time_measure = measureMergeSort(arr, n);
        }
        else if (!strcmp(output_param, "-comp"))
        {
            mergeSort(arr, 0, n - 1, count_compare);
        }
        else if (!strcmp(output_param, "-both"))
        {
            int *tmp = new int[n];
            for (int i = 0; i < n; i++)
                tmp[i] = arr[i];
            time_measure = measureMergeSort(tmp, n);
            mergeSort(arr, 0, n - 1, count_compare);
            delete[] tmp;
        }
    }
    else if (!strcmp(algorithm, "quick-sort"))
    {
        if (!strcmp(output_param, "-time"))
        {
            time_measure = measureQuickSort(arr, n);
        }
        else if (!strcmp(output_param, "-comp"))
        {
            quickSort(arr, 0, n - 1, count_compare);
        }
        else if (!strcmp(output_param, "-both"))
        {
            int *tmp = new int[n];
            for (int i = 0; i < n; i++)
                tmp[i] = arr[i];
            time_measure = measureQuickSort(tmp, n);
            quickSort(arr, 0, n - 1, count_compare);
            delete[] tmp;
        }
    }
    else if (!strcmp(algorithm, "counting-sort"))
    {
        if (!strcmp(output_param, "-time"))
        {
            time_measure = measureCountingSort(arr, n);
        }
        else if (!strcmp(output_param, "-comp"))
        {
            countingSort(arr, n, count_compare);
        }
        else if (!strcmp(output_param, "-both"))
        {
            int *tmp = new int[n];
            for (int i = 0; i < n; i++)
                tmp[i] = arr[i];
            time_measure = measureCountingSort(tmp, n);
            countingSort(arr, n, count_compare);
            delete[] tmp;
        }
    }
    else if (!strcmp(algorithm, "radix-sort"))
    {
        if (!strcmp(output_param, "-time"))
        {
            time_measure = measureRadixSort(arr, n);
        }
        else if (!strcmp(output_param, "-comp"))
        {
            radixSort(arr, n, count_compare);
        }
        else if (!strcmp(output_param, "-both"))
        {
            int *tmp = new int[n];
            for (int i = 0; i < n; i++)
                tmp[i] = arr[i];
            time_measure = measureRadixSort(tmp, n);
            radixSort(arr, n, count_compare);
            delete[] tmp;
        }
    }
    else if (!strcmp(algorithm, "flash-sort"))
    {
        if (!strcmp(output_param, "-time"))
        {
            time_measure = measureFlashSort(arr, n);
        }
        else if (!strcmp(output_param, "-comp"))
        {
            flashSort(arr, n, count_compare);
        }
        else if (!strcmp(output_param, "-both"))
        {
            int *tmp = new int[n];
            for (int i = 0; i < n; i++)
                tmp[i] = arr[i];
            time_measure = measureFlashSort(tmp, n);
            flashSort(arr, n, count_compare);
            delete[] tmp;
        }
    }
}

void command1(char algorithm[], char input_file[], char output_param[])
{
    ifstream fIn(input_file);

    if (!fIn.is_open())
    {
        cout << "File cannot be opened";
        return;
    }

    int n;
    fIn >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        fIn >> arr[i];
    fIn.close();

    cout << "ALGORITHM MODE" << endl;
    cout << "Algorithm: ";
    cout << "Input file: " << input_file << endl;
    cout << "Input size: " << n << endl;
    cout << "----------------------" << endl;

    double time_measure = -1;
    long long count_compare = -1;

    findSortFuncAndCalculate(arr, n, algorithm, output_param, count_compare, time_measure);

    if (time_measure != -1)
        cout << "Running time: " << time_measure << " ms" << endl;
    if (count_compare != -1)
        cout << "Comparisions: " << count_compare << endl;

    // Save result to output file
    ofstream fOut("output.txt");
    fOut << n << '\n';
    for (int i = 0; i < n; i++)
        fOut << arr[i] << ' ';
    fOut.close();

    delete[] arr;
}

void command2(char algorithm [] , int input_size, char input_order [], char output_param[]){

}

void command3(char algorithm [], int input_size, char output_param[]){

}

void command4(char algorithm1 [], char algorithm2 [], char input_file []){

}

void command5(char algorithm1 [], char algorithm2 [], int input_size, char input_order[]){
    
}