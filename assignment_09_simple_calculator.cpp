// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 9
// =============================================================================
//
// TASK: Console-Based Simple Calculator
//
// =============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


// Addition
double add(double a, double b)
{
    return a + b;
}


// Subtraction
double subtract(double a, double b)
{
    return a - b;
}


// Multiplication
double multiply(double a, double b)
{
    return a * b;
}


// Division
double divide(double a, double b)
{
    return a / b;
}


// Modulus (renamed to avoid conflict with std::modulus)
int calculateModulus(int a, int b)
{
    return a % b;
}


// Exponentiation
double power(double a, double b)
{
    return pow(a, b);
}



int main()
{
    int choice;

    double num1, num2;


    do
    {
        cout << endl;
        cout << "============================" << endl;
        cout << "     SIMPLE CALCULATOR" << endl;
        cout << "============================" << endl;

        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Exponentiation" << endl;
        cout << "7. Quit" << endl;

        cout << "Select an operation (1-7): ";
        cin >> choice;


        switch(choice)
        {
            case 1:
            {
                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);

                cout << "Result: "
                     << add(num1, num2)
                     << endl;

                break;
            }


            case 2:
            {
                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);

                cout << "Result: "
                     << subtract(num1, num2)
                     << endl;

                break;
            }


            case 3:
            {
                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);

                cout << "Result: "
                     << multiply(num1, num2)
                     << endl;

                break;
            }


            case 4:
            {
                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;


                if (num2 == 0)
                {
                    cout << "Error: Cannot divide by zero." << endl;
                }
                else
                {
                    cout << fixed << setprecision(2);

                    cout << "Result: "
                         << divide(num1, num2)
                         << endl;
                }

                break;
            }


            case 5:
            {
                int int1, int2;

                cout << "Enter first number: ";
                cin >> int1;

                cout << "Enter second number: ";
                cin >> int2;


                if (int2 == 0)
                {
                    cout << "Error: Cannot divide by zero." << endl;
                }
                else
                {
                    cout << "Result: "
                         << calculateModulus(int1, int2)
                         << endl;
                }

                break;
            }


            case 6:
            {
                cout << "Enter base number: ";
                cin >> num1;

                cout << "Enter exponent: ";
                cin >> num2;


                cout << fixed << setprecision(2);

                cout << "Result: "
                     << power(num1, num2)
                     << endl;

                break;
            }


            case 7:
            {
                cout << "Goodbye!" << endl;
                break;
            }


            default:
            {
                cout << "Error: Invalid choice." << endl;
            }
        }


    } while(choice != 7);


    return 0;
}