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

    char *algoName = new char[strlen(algorithm) + 1]();
    for (int i = 0; i < strlen(algorithm); i++)
    {
        algoName[i] = algorithm[i];
        if (algoName[i] == '-')
            algoName[i] = ' ';
    }

    cout << "ALGORITHM MODE" << endl;
    cout << "Algorithm: " << algoName << endl;
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

void command2(char algorithm[], int input_size, char input_order[], char output_param[])
{	
	char *algoName = new char[strlen(algorithm) + 1]();
    for (int i = 0; i < strlen(algorithm); i++)
    {
        algoName[i] = algorithm[i];
        if (algoName[i] == '-')
            algoName[i] = ' ';
    }
    //Print prompt
	cout << "ALGORITHM MODE" << endl;
    cout << "Algorithm: " << algoName << endl;
    cout << "Input size: " << input_size << endl;
    cout << "Input order: ";
    //Generate data
	int *arr = new int[input_size];
    if ( !strcmp (input_order, "-rand") )
    {
        GenerateRandomData(arr,input_size);
        std::cout << "Randomized data" << std::endl;
    }
    else if ( !strcmp( input_order, "-nsorted") )
    {
        GenerateNearlySortedData(arr, input_size);
        std::cout << "Nearly sorted data" << std::endl;
    }
    else if ( !strcmp( input_order, "-sorted") )
    {
        GenerateSortedData(arr,input_size);
        std::cout << "Sorted data" << std::endl;
    }
    else if ( !strcmp ( input_order, "-rev") )
    {
        GenerateReverseData(arr,input_size);
        std::cout << "Reverse sorted data" << std::endl;
    }
    cout << "----------------------" << endl;
    //Write the generated input
    ofstream fOut("input.txt");
    fOut << input_size << '\n';
    for (int i = 0; i < input_size; i++)
        fOut << arr[i] << ' ';
    fOut.close();

    double time_measure = -1;
    long long count_compare = -1;

    findSortFuncAndCalculate(arr, input_size, algorithm, output_param , count_compare, time_measure);

    if(time_measure != -1)
        std::cout << "Running time: " << time_measure  << " ms\n";
    if (count_compare != -1)
    std::cout << "Comparisions: " << count_compare  << std::endl;

    //Write the sorted array
    fOut.open("output.txt");
    fOut << input_size << '\n';
    for (int i = 0; i < input_size; i++)
        fOut << arr[i] << ' ';
    fOut.close();

	delete[] arr;
	delete[] algoName;
}

void command3(char algorithm[], int input_size, char output_param[])
{   
    char* algoName = new char[strlen(algorithm) + 1]();
    for (int i = 0; i < strlen(algorithm); i++)
    {
        algoName[i] = algorithm[i];
        if (algoName[i] == '-')
            algoName[i] = ' ';
    }
    //Print prompt
    cout << "ALGORITHM MODE" << endl;
    cout << "Algorithm: " << algoName << endl;
    cout << "Input size: " << input_size << endl << endl;
    char Input_order[4][20] = {"-rand", "-nsorted", "-sorted", "-rev"};
    int* arr = new int[input_size];
    for (int i = 0; i < 4; i++) {

        char* input_order = Input_order[i];
        cout << "Input order: ";

        //Generate data
        
        if (!strcmp(input_order, "-rand"))
        {
            GenerateRandomData(arr, input_size);
            cout << "Randomized data" << endl;
        }
        else if (!strcmp(input_order, "-nsorted"))
        {
            GenerateNearlySortedData(arr, input_size);
            cout << "Nearly sorted data" << endl;
        }
        else if (!strcmp(input_order, "-sorted"))
        {
            GenerateSortedData(arr, input_size);
            cout << "Sorted data" << endl;
        }
        else if (!strcmp(input_order, "-rev"))
        {
            GenerateReverseData(arr, input_size);
            cout << "Reverse sorted data" << endl;
        }
        cout << "----------------------" << endl;
        //Write the generated input
        char input_file[20];
        sprintf_s(input_file, "input_%d.txt", i + 1);
        ofstream fOut(input_file);
        fOut << input_size << '\n';
        for (int i = 0; i < input_size; i++)
            fOut << arr[i] << ' ';
        fOut.close();

        double time_measure = -1;
        long long count_compare = -1;

        findSortFuncAndCalculate(arr, input_size, algorithm, output_param, count_compare, time_measure);

        if (time_measure != -1)
            std::cout << "Running time: " << time_measure << " ms\n";
        if (count_compare != -1)
            std::cout << "Comparisions: " << count_compare << endl;

        cout << endl;

    }
    delete[] arr;
    delete[] algoName;
}

void command4(char algorithm1[], char algorithm2[], char input_file[])
{
    ifstream fIn;
    fIn.open(input_file);
    if (!fIn.is_open())
    {
        cout << "File cannot be opened";
        return;
    }

    int n;
    fIn >> n;
    int * arr = new int[n];
    int i;
    for (i = 0; i < n; i++)
        fIn >> arr[i];
    fIn.close();

    int *tempArr = new int[n];
    for (i = 0; i < n; i++)
        tempArr[i] = arr[i];

    char *algoname1 = new char[strlen(algorithm1) - 4]();
    i = 0;
    while ( algorithm1[i] != '-' )
    {
        algoname1[i] = algorithm1[i];
        i++;
    }
    
    char *algoname2 = new char[strlen(algorithm2) - 4]();
    i = 0;
    while ( algorithm2[i] != '-' )
    {
        algoname2[i] = algorithm2[i];
        i++;
    }

    std::cout << "COMPARE M0DE" << std::endl;
    std::cout << "Algorithm: " << algoname1 << " sort | " << algoname2 << " sort\n";
    std::cout << "Input flie: " << input_file << std::endl;
    std::cout << "Input size: " << n << std::endl;
    std::cout << "-------------------------------\n";

    double time_measure1 = -1, time_measure2 = -1;
    long long count_compare1 = -1, count_compare2 = -1;
    char output_param [6] = "-both";

    findSortFuncAndCalculate(arr, n, algorithm1, output_param , count_compare1, time_measure1);
    findSortFuncAndCalculate(tempArr, n, algorithm2, output_param, count_compare2, time_measure2);

    std::cout << "Running time: " << time_measure1 << " ms | " << time_measure2  << " ms\n";
    std::cout << "Comparisions: " << count_compare1 << " | " << count_compare2  << std::endl;

    delete[] algoname1;
    delete[] algoname2;
    delete[] tempArr;
    delete[] arr;

}

void command5(char algorithm1[], char algorithm2[], int input_size, char input_order[])
{ 
    int i;
    char *algoname1 = new char[strlen(algorithm1) - 4]();
    i = 0;
    while ( algorithm1[i] != '-' )
    {
        algoname1[i] = algorithm1[i];
        i++;
    }
    
    char *algoname2 = new char[strlen(algorithm2) - 4]();
    i = 0;
    while ( algorithm2[i] != '-' )
    {
        algoname2[i] = algorithm2[i];
        i++;
    }

    std::cout << "COMPARE M0DE" << std::endl;
    std::cout << "Algorithm: " << algoname1 << " sort | " << algoname2 << " sort\n";
    std::cout << "Input size: " << input_size << std::endl;
    std::cout << "Input order: ";

    int *arr = new int[input_size];
    if ( !strcmp (input_order, "-rand") )
    {
        GenerateRandomData(arr,input_size);
        std::cout << "Randomized data" << std::endl;
    }
    else if ( !strcmp( input_order, "-nsorted") )
    {
        GenerateNearlySortedData(arr, input_size);
        std::cout << "Nearly sorted data" << std::endl;
    }
    else if ( !strcmp( input_order, "-sorted") )
    {
        GenerateSortedData(arr,input_size);
        std::cout << "Sorted data" << std::endl;
    }
    else if ( !strcmp ( input_order, "-rev") )
    {
        GenerateReverseData(arr,input_size);
        std::cout << "Reverse sorted data" << std::endl;
    }
    std::cout << "-------------------------------------\n";

    ofstream fOut;
    fOut.open("intput.txt");
    fOut << input_size << "\n";
    int * tempArr = new int[input_size];
    for ( i = 0; i < input_size; i++)
    {
        fOut << arr[i] << " ";
        tempArr[i] = arr[i];
    }
    fOut.close();

    double time_measure1 = -1, time_measure2 = -1;
    long long count_compare1 = -1, count_compare2 = -1;
    char output_param [6] = "-both";

    findSortFuncAndCalculate(arr, input_size, algorithm1, output_param , count_compare1, time_measure1);
    findSortFuncAndCalculate(tempArr, input_size, algorithm2, output_param, count_compare2, time_measure2);

    std::cout << "Running time: " << time_measure1 << " ms | " << time_measure2  << " ms\n";
    std::cout << "Comparisions: " << count_compare1 << " | " << count_compare2  << std::endl;

    delete[] tempArr;
    delete[] arr;
    delete[] algoname2;
    delete[] algoname1;

}
