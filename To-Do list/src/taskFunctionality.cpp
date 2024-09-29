#include "../include/helperFunctions.h"
#include <iostream>
#include <vector>
#include <string>
#include <limits>

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
    cout << "\n####################################################\n";
}

void addTaskHeader() {
    cout << "\n####################################################\n";
    cout << "#                    TO-DO List                    #\n";
    cout << "####################################################\n";
    cout << "\n1. Add task\n";
    cout << "\n####################################################\n";
}

void viewTasksHeader() {
    cout << "\n####################################################\n";
    cout << "#                    TO-DO List                    #\n";
    cout << "####################################################\n";
    cout << "\n2. View tasks\n";
    cout << "\n####################################################\n";
}

void editTasksHeader() {
    cout << "\n####################################################\n";
    cout << "#                    TO-DO List                    #\n";
    cout << "####################################################\n";
    cout << "\n3. Edit task\n";
    cout << "\n####################################################\n";
}

void deleteTaskHeader() {
    cout << "\n####################################################\n";
    cout << "#                    TO-DO List                    #\n";
    cout << "####################################################\n";
    cout << "\n4. Delete task\n";
    cout << "\n####################################################\n";
}

void addTask() {
    string newTask;
    string addAnotherTask;

    do {
        cout << "\nEnter task name: \n";
        cin >> newTask;

        tasks.push_back(newTask);
        cout << "\nTask " << newTask << " added successfully!\n";

        do {
            cout << "\nDo you want to add another task? (y/n): \n";
            cin >> addAnotherTask;

            if (addAnotherTask != "y" && addAnotherTask != "n") {
                cout << "\nWrong input. Please try again!\n";
            }
        } while (addAnotherTask != "y" && addAnotherTask != "n");
    } while (addAnotherTask == "y");
}

void viewTasks() {
    int listNumber = 1;

    if (tasks.empty()) {
        cout << "\nNo tasks found\n";
    } else {
        cout << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << listNumber++ << ". " << tasks[i] << endl;
        }
    }
}

void editTask() {
    int listNumber = 1;
    int selectedEditTask;

    if (tasks.empty()) {
        cout << "\nNo tasks found\n";
        cout << "\nPress Enter to return to the main menu\n";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    } else {
        cout << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << listNumber++ << ". " << tasks[i] << endl;
        }
        cout << "\nSelect a task to edit: \n";
        cin >> selectedEditTask;
        cout << "\nYou selected a task - " << tasks[selectedEditTask - 1] << " - to be edited." << endl;
        cout << "\nEnter new task name: \n";
        cin >> tasks[selectedEditTask - 1];
    }
}

void deleteTask() {
    int listNumber = 1;
    int selectedDeleteTask;
    string deleteTask;

    if (tasks.empty()) {
        cout << "\nNo tasks found\n";
        cout << "\nPress Enter to return to the main menu\n";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    } else {
        cout << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << listNumber++ << ". " << tasks[i] << endl;
        }
        cout << "\nSelect a task to delete: \n";
        cin >> selectedDeleteTask;
        do {
            cout << "\nDo you want to delete " << tasks[selectedDeleteTask - 1] <<"? (y/n): \n";
            cin >> deleteTask;

            if (deleteTask != "y" && deleteTask != "n") {
                cout << "\nWrong input. Please try again!\n";
            }
        } while (deleteTask != "y" && deleteTask != "n");
        tasks.erase(tasks.begin() + selectedDeleteTask - 1);
    }
}

void run() {
    int choice;

    do {
        clearScreen();
        mainMenu();
        cout << "\nEnter your choice: \n";
        cin >> choice;

        switch (choice) {
            case 1:
                clearScreen();
                addTaskHeader();
                addTask();
                break;
            case 2:
                clearScreen();
                viewTasksHeader();
                viewTasks();
                cout << "\nPress Enter to return to the main menu\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.get();
                break;
            case 3:
                clearScreen();
                editTasksHeader();
                editTask();
                break;
            case 4:
                clearScreen();
                deleteTaskHeader();
                deleteTask();
            case 5:
                cout << "\nShutting down...";
                break;
            default:
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    clearScreen();
                    mainMenu();
                    cout << "\nInvalid choice\n";
                    cout << "\nEnter your choice: \n";
                    cin >> choice;
                } else {
                    clearScreen();
                    mainMenu();
                    cout << "\nInvalid choice\n";
                    cout << "\nEnter your choice: \n";
                    cin >> choice;
                }
        }
    } while (choice != 5);
}
