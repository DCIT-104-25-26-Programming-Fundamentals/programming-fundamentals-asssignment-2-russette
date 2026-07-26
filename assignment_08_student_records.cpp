#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;


// Student structure
struct Student
{
    string name;
    int id;
    vector<double> scores;
};


// Calculate average
double getAverage(Student student)
{
    double total = 0;

    for (double score : student.scores)
    {
        total += score;
    }

    return total / student.scores.size();
}


// Add student
void addStudent(vector<Student>& students)
{
    Student student;

    cout << "Student name: ";
    cin.ignore();
    getline(cin, student.name);


    cout << "Student ID: ";
    cin >> student.id;


    int numberOfScores;

    cout << "How many scores? ";
    cin >> numberOfScores;


    for (int i = 0; i < numberOfScores; i++)
    {
        double score;

        cout << "Enter score " << i + 1 << ": ";
        cin >> score;

        student.scores.push_back(score);
    }


    students.push_back(student);


    cout << "Student \"" << student.name
         << "\" added successfully." << endl;
}


// Display all students
void displayStudents(vector<Student>& students)
{
    if (students.empty())
    {
        cout << "No students have been added yet." << endl;
        return;
    }


    cout << endl;
    cout << "Student Records:" << endl;


    for (Student student : students)
    {
        cout << "----------------------------" << endl;

        cout << "Name: " << student.name << endl;
        cout << "ID: " << student.id << endl;


        cout << "Scores: ";

        for (double score : student.scores)
        {
            cout << score << " ";
        }

        cout << endl;


        cout << fixed << setprecision(2);

        cout << "Average: "
             << getAverage(student)
             << endl;
    }
}


// Find student's average
void calculateAverage(vector<Student>& students)
{
    int id;

    cout << "Enter student ID: ";
    cin >> id;


    for (Student student : students)
    {
        if (student.id == id)
        {
            cout << fixed << setprecision(2);

            cout << student.name
                 << "'s average score: "
                 << getAverage(student)
                 << endl;

            return;
        }
    }


    cout << "Error: Student ID not found." << endl;
}



int main()
{
    vector<Student> students;

    int choice;


    do
    {
        cout << endl;

        cout << "================================" << endl;
        cout << "   STUDENT RECORD SYSTEM MENU" << endl;
        cout << "================================" << endl;

        cout << "1. Add student" << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Calculate average score" << endl;
        cout << "4. Quit" << endl;


        cout << "Enter your choice (1-4): ";
        cin >> choice;



        switch(choice)
        {
            case 1:
                addStudent(students);
                break;


            case 2:
                displayStudents(students);
                break;


            case 3:
                calculateAverage(students);
                break;


            case 4:
                cout << "Goodbye!" << endl;
                break;


            default:
                cout << "Error: Invalid choice." << endl;
        }


    } while(choice != 4);


    return 0;
}