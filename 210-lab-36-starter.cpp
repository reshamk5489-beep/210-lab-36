#include <iostream>
#include "StringBinaryTree.h"
#include <fstream>
#include <string>
using namespace std;

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

   tree.displayInOrder();
  
   return 0;
}

// Milestone 3