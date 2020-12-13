#include <iostream>
using namespace std;
void display();

int share_me = 4; // variable definition

/*
External Linkage

A name with external linkage refers to an entity that is declared in a different scope within another translation unit.  The C++ keyword extern identifies external linkage.

 extern int share_me; // declaration
We omit this linkage keyword in the translation unit that defines and initialize the named entity:

 int share_me = 0;  // definition
C++ ignores the extern keyword if an initialization is present.

In the following program the name share_me refers to the same entity across two translation units.  The variable
*/

int main()
{
	display();
	display();
	cout << "share_me at " << &share_me << endl;
	cout << "share_me is " << share_me++ << endl;

	return 0;
}