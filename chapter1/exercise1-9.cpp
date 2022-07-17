#include <iostream>

/**
 * Write a program that uses a while to sum the numbers from 50 to 100.
 */

int main(int argc, char const *argv[])
{
	int n = 50;
	int sum = 0;
	while(n <= 100){
		sum += n;
		n++;
	}
	std::cout << sum << std::endl;
	return 0;
}