#include <iostream>
using namespace std;
static int local = 4; 

void display()
{
	cout << "local at " << &local << endl;
	cout << "local is " << local++ << endl;
}