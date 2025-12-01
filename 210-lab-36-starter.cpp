#include <iostream>
#include "StringBinaryTree.h"
#include <fstream>
#include <string>
using namespace std;

// Comment #1: Function prototypes.
void printMenu();
int getChoice();

int main()
{
    // Comment #2: Open file and read strings into the tree.
    ifstream file;
    file.open("codes.txt");
    string code;
    
    // Comment #3: Create the binary tree object.
    StringBinaryTree tree;

    // Comment #4: Read strings from the file and insert them into the BST tree.
    while (getline(file, code))
    {
        tree.insertNode(code);
    }

    file.close();

    string insertStr;
    bool isExit = false;

    while (isExit == false)
    {
        printMenu();
        int choice = getChoice();

        switch (choice)
        {
            // Comment #5: Handle user choices.
            case 1:
                cout << "Please enter a string to insert: ";
                cin >> insertStr;
                tree.insertNode(insertStr); // Comment #6: Insert the string into the tree.

                break;
            case 2:
                cout << "Please enter a string to remove: ";
                cin >> insertStr;
                tree.remove(insertStr); // Comment #7: Remove the string from the tree.

                break;
            case 3:
                cout << "Please enter a string to search for: ";
                cin >> insertStr;
                if (tree.searchNode(insertStr)) // Comment #8: Search for the string in the tree.
                {
                    cout << insertStr << " was found in the tree." << endl;
                }
                else    
                {
                    cout << insertStr << " was not found in the tree." << endl;
                }

                break;
            case 4:
                cout << "Please enter a string to modify: ";
                cin >> insertStr;
                if (tree.searchNode(insertStr))
                {
                    // Comment #9: Modify the string by removing and re-inserting it.
                    tree.remove(insertStr);
                    cout << "Enter the new string: ";
                    cin >> insertStr;
                    tree.insertNode(insertStr);
                }
                else
                {
                    cout << insertStr << " was not found in the tree." << endl;
                }
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
                isExit = true;
                break;
        }
    }
  
    return 0;
}

// Comment #10: Function to print the menu options.
void printMenu()
{
    cout << endl << "Menu Options:" << endl;
    cout << "1. Insert a string" << endl;
    cout << "2. Remove a string" << endl;
    cout << "3. Search for a string" << endl;
    cout << "4. Modify a string" << endl;
    cout << "5. Display In-Order" << endl;
    cout << "6. Display Pre-Order" << endl;
    cout << "7. Display Post-Order" << endl;
    cout << "8. Exit" << endl;
}

// Comment #11: Function to get the user's menu choice.
int getChoice()
{
    int choice;
    cout << endl << "Enter your choice: ";
    cin >> choice;

    return choice;
}