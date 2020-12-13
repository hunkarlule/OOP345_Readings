#include <iostream>
using namespace std;
void display();

static int local = 2; // variable definition

/*
Internal Linkage

A name with internal linkage refers to an entity that is invisible outside its own translation unit, but visible to other scopes within its translation unit.  The C++ keyword static identifies internal linkage.

 static int local = 2;
The following program allocates separate memories for the variables named local in Module_a.cpp and Module_b.cpp.  The same name (local) refers to two distinct variables in the two translation units.
*/

int main()
{
	display();
	display();
	cout << "local at " << &local << endl;
	cout << "local is " << local++ << endl;

	return 0;
}