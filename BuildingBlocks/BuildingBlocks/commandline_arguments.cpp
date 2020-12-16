#include <iostream>

/*
The first parameter (argc) in the command-line-arguments version of the main() function receives the number of arguments supplied on the command line from the operating system.  This number includes the name of the relocatable file.  The second parameter (argv) receives the address of an array of pointers to C-style null-terminated strings.  Each pointer holds the address of a string that holds one command-line argument.  argv[0] holds the address of the name of the relocatable file.  argv[i] holds the address of the C-style null-terminated string that holds the i-th command-line argument.

Consider the following command-line instruction:

 my_prg Assignments Workshops Tests Exam

*/

int main(int argc, char* argv[])
{
	std::cout << "Course: " << argv[0] << std::endl;
	for (int i = 1; i < argc; i++)
	{
		std::cout << "- " << argv[i] << std::endl;
	}
}