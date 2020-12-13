#include <iostream>
using namespace std;

/*
Shadowing

A name declared within the scope of an identical name shadows the entity with the broader scope.  Shadowing of this form should be avoided to improve readability and maintainability.
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