#include <iostream>
#include <vector>
#include <string>
using namespace std;


// Add a task
void addTask(vector<string>& tasks)
{
    string task;

    cout << "Enter task: ";
    cin.ignore();
    getline(cin, task);

    tasks.push_back(task);

    cout << "Task added: \"" << task << "\"" << endl;
}


// View all tasks
void viewTasks(vector<string>& tasks)
{
    if (tasks.empty())
    {
        cout << "Your task list is empty." << endl;
        return;
    }


    cout << "Your Tasks:" << endl;

    for (int i = 0; i < tasks.size(); i++)
    {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}


// Delete a task
void deleteTask(vector<string>& tasks)
{
    if (tasks.empty())
    {
        cout << "No tasks available to delete." << endl;
        return;
    }


    viewTasks(tasks);

    int number;

    cout << "Enter task number to delete: ";
    cin >> number;


    if (number < 1 || number > tasks.size())
    {
        cout << "Error: Invalid task number." << endl;
        return;
    }


    cout << "Task \"" << tasks[number - 1]
         << "\" has been removed." << endl;


    tasks.erase(tasks.begin() + (number - 1));
}



int main()
{
    vector<string> tasks;

    int choice;


    do
    {
        cout << endl;
        cout << "============================" << endl;
        cout << "       TO-DO LIST MENU" << endl;
        cout << "============================" << endl;

        cout << "1. Add task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Delete task" << endl;
        cout << "4. Quit" << endl;

        cout << "Enter your choice (1-4): ";
        cin >> choice;


        switch(choice)
        {
            case 1:
                addTask(tasks);
                break;


            case 2:
                viewTasks(tasks);
                break;


            case 3:
                deleteTask(tasks);
                break;


            case 4:
                cout << "Goodbye!" << endl;
                break;


            default:
                cout << "Error: Invalid choice. Please select 1-4." << endl;
        }


    } while(choice != 4);


    return 0;
}