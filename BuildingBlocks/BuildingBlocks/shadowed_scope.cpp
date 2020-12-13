#include <iostream>
using namespace std;

/*
Shadowing

A name declared within the scope of an identical name shadows the entity with the broader scope.  Shadowing of this form should be avoided to improve readability and maintainability.

The name of a variable declared within a member function shadows the instance variable with an identical name.  The name of the shadowed instance variable can be accessed using the this keyword (this->name).

The name of a variable within a class or a function shadows the entity with an identical name and global scope.  The name of the shadowed global variable can be accessed using the scope resolution operator (::name).
*/
int main()
{
    int i;
    std::cout << "Enter i : ";
    std::cin >> i;
    if (i < 0)
    { 
        int i = 4; // shadows the outer i
        cout << i << endl;
    }
    else
    {
        int i = -4; // shadows the outer i
        cout << i << endl;
    }
    std::cout << i << std::endl; 
   
}