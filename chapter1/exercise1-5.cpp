#include <iostream>

/**
 * Rewrite the program to use a separete statement to print each operand.
 */
int main(int argc, char const *argv[])
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The product of " << v1;
	std::cout << " and " << v2;
	std::cout << " is " << v1 * v2 << std::endl;
	return 0;
}