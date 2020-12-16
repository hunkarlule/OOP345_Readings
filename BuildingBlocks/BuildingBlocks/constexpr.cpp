#include <iostream>

/*
COMPILE-TIME EVALUATIONS

Modern compilers are sophisticated enough to perform calculations that will not change during the execution of a program and store the results of those calculations in the executable code.  C++ provides specialized syntax for evaluations at compile-time and for reporting custom error messages during the translation unit compilation stage.

Constant Expressions

The constexpr keyword declares that the value of its identifier is a run-time constant and can be evaluated at compile time.

Example

In this example, the factorial calculation expressed in the form of a recursive function (a function that calls itself) does not depend on the rest of the program and is identified as a constant expression.  An constant expression can only refer to variables that are also constant expressions:

Both the variable N and the function factorial are evaluated at compile-time and the result is stored as a constant value in the output stream expression.

*/

constexpr int N = 8; // constant variable
constexpr int factorial(int i) // constant function
{
	return i > 1 ? i * factorial(i - 1) : 1;
}
int main()
{
	int n{ N };
	std::cout << "n = " << n << std::endl;
	std::cout << n << "!= " << factorial(n) << std::endl;
	system("pause");
	return 0;
}