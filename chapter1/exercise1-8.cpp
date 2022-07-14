#include <iostream>

// Indicate which, if any, of the following output statments are legal:
// std::cout << "/*";		// legal
// std::cout << "*/";		// legal
// std::cout << /* "*/" */;	// illegal
// std::cout << /*	 "*/" /*  "/*"  */;	// legal
// After you've predicted what will happen, test your answers by
// compiling a program with each of these statements.
// Correct any errors you encounter.

int main(int argc, char const *argv[])
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */";	// fixed
	std::cout << /*	 "*/" /*  "/*"  */;
	return 0;
}