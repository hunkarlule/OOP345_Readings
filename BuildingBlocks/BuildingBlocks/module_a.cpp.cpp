#include <iostream>
using namespace std;
extern int share_me; // external linkage declaration

void display()
{
	cout << "share_me at " << &share_me << endl;
	cout << "share_me is " << share_me++ << endl;
}