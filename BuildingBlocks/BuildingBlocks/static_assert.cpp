#include <iostream>

/*
Static Assertions

The C++ language supports messaging at compile time prompted by custom checks in addition to messaging prompted by inconsistencies in the source code caught by the C++ type system.

These custom programmer-inserted checks are called assertions.  The static_assert() mechanism generates a custom compiler error message if the specified condition is not met.

 static_assert(bool condition, const char* message);
Example

In this example, the main() function checks that the value of N (which has been specified earlier in the translation stream) and reports an error if the value is outside practical bounds:

*/

constexpr int N = 21; // constant variable
constexpr int factorial(int i) // constant function
{
	return i > 1 ? i * factorial(i - 1) : 1;
}
int main()
{
	static_assert(N > 0, "N <= 0");
	static_assert(N < 20, "N >= 20");
	int n{ N };
	std::cout << "n = " << n << std::endl;
	std::cout << n << "!= " << factorial(n) << std::endl;
	system("pause");
	return 0;
}