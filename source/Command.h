#pragma once
#include <cstring>
#include <fstream>
#include <iostream>
#include "DataGenerator.h"
#include "Sort.h"

void findSortFuncAndCalculate(int *arr, int n, char algorithm[], char output_param[], long long &count_compare, double &time_measure);
 
void command1(char algorithm [] , char input_file [], char output_param[]);

void command2(char algorithm [] , int input_size, char input_order [], char output_param[]);

void command3(char algorithm [], int input_size, char output_param[]);

void command4(char algorithm1 [], char algorithm2 [], char input_file []);

void command5(char algorithm1 [], char algorithm2 [], int input_size, char input_order[]);

