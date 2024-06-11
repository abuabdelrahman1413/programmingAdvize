#ifndef MATRIXLIB_H
#define MATRIXLIB_H

#include <iostream>
#include <vector>
#include <cstdio>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int RandomNumber (int From, int To);
void FillMatrixWithRandomNumbers(int arr[3][3], int Row, int Col);
void PrintMatrix(int arr[3][3], int Row, int Col);
void PrintMiddleRow(int arr[3][3], int Row, int Col);
void PrintMiddleColumn(int arr[3][3], int Row, int Col);
void PrintArray(int arr[3], int size);
void MultiplyMatrices(int arr1[3][3], int arr2[3][3], int arrResult[3][3], int Row, int Col);
void TrnsposeMatrix(int arr[3][3], int arrTransposed[3][3], int Row, int Col);
void FillMatrixWithOrderdNumbers(int arr[3][3], int Row, int Col);
int ColSum(int arr[3][3], int Row, int Col);
int RowSum(int arr[3][3], int RowNumber, int Col);
int SumOfMatrix(int arr[3][3], int Row, int Col);
bool CheckEqualMatrices (int SumMatrix1, int SumMatrix2);
#endif // MATRIXLIB_H
