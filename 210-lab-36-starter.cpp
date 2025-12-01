#include <iostream>
#include "StringBinaryTree.h"
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    StringBinaryTree tree;

    tree.insertNode("AbCD123");
    tree.insertNode("EfgH456");
    tree.insertNode("IjkLm789");
    tree.insertNode("NoPqrs101");
    tree.insertNode("TUVwx121");

    tree.displayPostOrder();
    
    return 0;
}