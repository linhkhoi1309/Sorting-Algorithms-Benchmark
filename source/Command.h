#pragma once
#include <time.h>
#include <cstring>
#include <fstream>
#include "DataGenerator.h"
#include "Sort.h"
 
void command1(char algorithm [] , char input_file [], char output_param[]);

void command2(char algorithm [] , int input_size, char input_order [], char output_param[]);

void command3(char algorithm [], int input_size, char output_param[]);

void command4(char algorithm1 [], char algorithm2 [], char input_file []);

void command5(char algorithm1 [], char algorithm2 [], int input_size, char input_order[]);


double measureTime(int *arr, int n, void (*sortingFunc)(int *, int));
double measureTime(int *arr, int n, void (*sortingFunc)(int *, int, int)); // for recursive func