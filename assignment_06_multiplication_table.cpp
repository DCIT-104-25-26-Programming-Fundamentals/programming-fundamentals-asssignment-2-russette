#include <iostream>
using namespace std;


// Part A: Print one multiplication table
void printTable(int number)
{
    cout << "Multiplication Table for " << number << ":" << endl;

    for (int i = 1; i <= 12; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}


// Part B: Print tables from 1 to N
void printTablesUpToN(int n)
{
    for (int number = 1; number <= n; number++)
    {
        printTable(number);

        cout << "---------------------------" << endl;
    }
}


int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;


    // Validate input
    if (number <= 0)
    {
        cout << "Error: Number must be positive." << endl;
        return 0;
    }


    // Part A
    printTable(number);


    // Part B
    int n;

    cout << endl;
    cout << "Enter N for tables from 1 to N: ";
    cin >> n;


    if (n <= 0)
    {
        cout << "Error: Number must be positive." << endl;
        return 0;
    }


    printTablesUpToN(n);


    return 0;
}