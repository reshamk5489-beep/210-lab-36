#include <iostream>
#include "StringBinaryTree.h"
#include <fstream>
#include <string>
using namespace std;

void printMenu();
int getChoice();

int main()
{
    ifstream file;
    file.open("codes.txt");
    string code;
    StringBinaryTree tree;

    while (getline(file, code))
    {
        tree.insertNode(code);
    }

    file.close();

    bool isExit = false;

    while (isExit == false)
    {
        printMenu();
        int choice = getChoice();

        switch (choice)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                tree.displayInOrder();
                break;
            case 6:
                tree.displayPreOrder();
                break;
            case 7:
                tree.displayPostOrder();
                break;
            case 8:
                return 0;
        }
    }
  
    return 0;
}

void printMenu()
{
    cout << "Menu Options:" << endl;
    cout << "1. Insert a string" << endl;
    cout << "2. Remove a string" << endl;
    cout << "3. Search for a string" << endl;
    cout << "4. Modify a string" << endl;
    cout << "5. Display In-Order" << endl;
    cout << "6. Display Pre-Order" << endl;
    cout << "7. Display Post-Order" << endl;
    cout << "8. Exit" << endl;
}

int getChoice()
{
    int choice;
    cout << endl << "Enter your choice: ";
    cin >> choice;

    return choice;
}