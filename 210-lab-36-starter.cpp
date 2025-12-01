#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ifstream file;
    file.open("codes.txt");
    string line;
    IntBinaryTree* tree = nullptr;

    while (getline(file, line)) {
    }

    file.close();

    return 0;
}