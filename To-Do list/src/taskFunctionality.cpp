#include "../include/helperFunctions.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> tasks;

void mainMenu() {
    cout << "\n####################################################\n";
    cout << "#                    TO-DO List                    #\n";
    cout << "####################################################\n";
    cout << "\n1. Add task\n";
    cout << "2. View tasks\n";
    cout << "3. Edit task\n";
    cout << "4. Delete task\n";
    cout << "5. Exit\n";
    cout << "####################################################\n";
}

void addTask() {
    string newTask;
    string addTaskAction;

    while (addTaskAction != "n") {
        cout << "\nEnter task name: \n";
        cin >> newTask;

        tasks.push_back(newTask);

        cout << "\nTask " << newTask << " added successfully!\n";
        cout << "\nDo you want to add another task?: \n";
        cin >> addTaskAction;
    }
}

void viewTasks() {
    int listNumber = 1;

    if (tasks.size() == 0) {
        cout << "\nNo tasks found\n";
    }
    else {
        for (int i = 0; i < tasks.size(); i++) {
            cout << listNumber++ << ". " << tasks[i] << endl;
        }
    }
}