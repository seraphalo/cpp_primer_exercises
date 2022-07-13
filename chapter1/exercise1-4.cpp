#include <iostream>

/**
 * Write a program that uses the multiplication operator,
 * *, to print the product instead.
 */
int main(int argc, char const *argv[])
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The product of " << v1 << " and " << v2
				<< " is " << v1 * v2 << std::endl;
	return 0;
}