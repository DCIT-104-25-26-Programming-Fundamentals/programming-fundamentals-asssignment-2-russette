#include <iostream>
using namespace std;


// Function to print first N Fibonacci terms
void printFibonacci(int n)
{
    int first = 0;
    int second = 1;

    cout << "Fibonacci sequence: ";

    for (int i = 0; i < n; i++)
    {
        cout << first << " ";

        int next = first + second;

        first = second;
        second = next;
    }

    cout << endl;
}


// Function to check if a number is Fibonacci
bool isFibonacci(int number)
{
    int first = 0;
    int second = 1;

    while (first <= number)
    {
        if (first == number)
        {
            return true;
        }

        int next = first + second;

        first = second;
        second = next;
    }

    return false;
}


int main()
{
    int n;

    cout << "How many terms? ";
    cin >> n;


    // Validate N
    if (n <= 0)
    {
        cout << "Error: Number of terms must be positive." << endl;
        return 0;
    }


    // Part A
    printFibonacci(n);


    // Part B
    int number;

    cout << "Enter a number to check: ";
    cin >> number;


    if (isFibonacci(number))
    {
        cout << number << " is a Fibonacci number." << endl;
    }
    else
    {
        cout << number << " is NOT a Fibonacci number." << endl;
    }


    return 0;
}