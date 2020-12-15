#include <iostream>

/*
Static Duration

An integer of static duration can be used to count the number of times that a function has been called:Note that the second call to display() does not re-initialize n. 
*/
void display()
{
	static int n = 1;
	std::cout << "n is " << n++ << std::endl;
}

int main()
{
	display();
	display();
}