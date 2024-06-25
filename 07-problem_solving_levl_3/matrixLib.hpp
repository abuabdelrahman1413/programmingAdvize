#ifndef MATRIXLIB_H
#define MATRIXLIB_H

#include <iostream>
#include <vector>
#include <cstdio>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

// Function to generate a random number between 'From' and 'To'
int RandomNumber(int From, int To);

// Function to fill a matrix with random numbers
void FillMatrixWithRandomNumbers(int arr[3][3], int Row, int Col);

// Function to print a matrix
void PrintMatrix(int arr[3][3], int Row, int Col);

// Function to print the middle row of a matrix
void PrintMiddleRow(int arr[3][3], int Row, int Col);

// Function to print the middle column of a matrix
void PrintMiddleColumn(int arr[3][3], int Row, int Col);

// Function to print an array
void PrintArray(int arr[3], int size);

// Function to multiply two matrices and store the result in another matrix
void MultiplyMatrices(int arr1[3][3], int arr2[3][3], int arrResult[3][3], int Row, int Col);

// Function to transpose a matrix and store the result in another matrix
void TrnsposeMatrix(int arr[3][3], int arrTransposed[3][3], int Row, int Col);

// Function to fill a matrix with ordered numbers starting from 1
void FillMatrixWithOrderedNumbers(int arr[3][3], int Row, int Col);

// Function to calculate the sum of a column in a matrix
int ColSum(int arr[3][3], int Row, int Col);

// Function to calculate the sum of a row in a matrix
int RowSum(int arr[3][3], int RowNumber, int Col);

// Function to calculate the sum of all elements in a matrix
int SumOfMatrix(int arr[3][3], int Row, int Col);

// Function to check if two sums of matrices are equal
bool CheckEqualMatrices(int SumMatrix1, int SumMatrix2);

// Function to check if two matrices are identical
bool CheckTypicalMatrices(int arr1[3][3], int arr2[3][3], int Row, int Col);

// Function to check if a matrix is an identity matrix
bool CheckIdentityMatrix(int arr[3][3], int Row, int Col);
int CountElementInMatrix(int arr[3][3], int Row, int Col, int element);
bool IsSparseMatrix(int arr[3][3], int Row, int Col);
bool isElemntExist(int arr[3][3], int Row, int Col, int element);
void IntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], int Row, int Col);
int MinNumberInMatrix(int arr[3][3], int Row, int Col);
int MaxNumberInMatrix(int arr[3][3], int Row, int Col);
bool IsPalindrome(int Array[100],int LengthOfArray);
bool isPalindromeMatrix(int matrix[3][3], int Row, int Col);
#endif
