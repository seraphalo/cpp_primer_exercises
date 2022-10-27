#include <iostream>

/**
 * Rewrite the first two exercises from section 1.4.1 (p. 13) using for loops.
 */

int exercise9Rewrite(){
	int sum = 0;
	for (int i = 50; i < 100; ++i)
	{
		sum += i;
	}
	return sum;
}

int exercise10Rewrite(){
	for (int i = 10; i >= 0; --i)
	{
		std::cout << i << std::endl;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	std::cout << "Sum of the numbers from 50 to 100 is " 
				<< exercise9Rewrite() << std::endl;			
	exercise10Rewrite();
	return 0;
}