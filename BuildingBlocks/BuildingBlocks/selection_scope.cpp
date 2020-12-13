#include <iostream>
using namespace std;

/*
Block Scope

A C++ block is a set of program instructions enclosed within curly braces.  Any block can be treated as a single compound instruction.  A name declared within a block is local to that block.  The name's scope extends from its declaration to the end of its block.

C++17 introduced initializer expressions into selection constructs.  The scope of a name declared in the selection condition of a selection construct extends to the end of the construct itself.  In the case of an if else construct, the scope of the name includes all branches of the construct.  In the case of a switch construct, the scope of the name includes all of the cases including the default case.
*/
int main()
{
    int i;
    std::cout << "Enter i : ";
    std::cin >> i;
    if (int j = i % 10; j < 5)
    { // C++17
        i -= j;      // round down
    }
    else
    {
        i += 10 - j; // round up
    }
    std::cout << i << std::endl;

    std::cout << "Enter i : ";
    std::cin >> i;
    switch (int j = i % 10; j / 5)
    { // C++17
    case 0: // round down
        i -= j;
        break;
    case 1: // round up
        i += 10 - j;
    }
    std::cout << i << std::endl;
}