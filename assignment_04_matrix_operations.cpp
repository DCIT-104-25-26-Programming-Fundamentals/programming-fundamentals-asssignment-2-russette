#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


// Display matrix neatly
void displayMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}


// Transpose matrix
void transpose(int matrix[10][10], int result[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }
}


// Add two matrices
void addMatrices(int A[10][10], int B[10][10], int result[10][10],
                 int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}


// Multiply two matrices
void multiplyMatrices(int A[10][10], int B[10][10], int result[10][10],
                      int rowsA, int colsA, int colsB)
{
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < colsA; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}


int main()
{
    int matrix[10][10];
    int transposeMatrix[10][10];

    int A[10][10];
    int B[10][10];
    int sum[10][10];

    int product[10][10];

    int rows, cols;


    // PART A
    cout << "PART A - Matrix Transpose" << endl;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }


    cout << "\nOriginal Matrix:" << endl;
    displayMatrix(matrix, rows, cols);


    transpose(matrix, transposeMatrix, rows, cols);


    cout << "\nTransposed Matrix:" << endl;
    displayMatrix(transposeMatrix, cols, rows);



    // PART B
    cout << "\nPART B - Matrix Addition" << endl;


    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter columns: ";
    cin >> cols;


    cout << "Enter Matrix A:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }


    cout << "Enter Matrix B:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> B[i][j];
        }
    }


    addMatrices(A, B, sum, rows, cols);


    cout << "Addition Result:" << endl;
    displayMatrix(sum, rows, cols);



    // PART C
    cout << "\nPART C - Matrix Multiplication" << endl;

    int rowsA, colsA, rowsB, colsB;


    cout << "Enter rows of Matrix A: ";
    cin >> rowsA;

    cout << "Enter columns of Matrix A: ";
    cin >> colsA;


    cout << "Enter rows of Matrix B: ";
    cin >> rowsB;

    cout << "Enter columns of Matrix B: ";
    cin >> colsB;


    if (colsA != rowsB)
    {
        cout << "Error: Matrix multiplication not possible." << endl;
        return 0;
    }


    cout << "Enter Matrix A:" << endl;

    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            cin >> A[i][j];
        }
    }


    cout << "Enter Matrix B:" << endl;

    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            cin >> B[i][j];
        }
    }


    multiplyMatrices(A, B, product, rowsA, colsA, colsB);


    cout << "Multiplication Result:" << endl;
    displayMatrix(product, rowsA, colsB);


    return 0;
}