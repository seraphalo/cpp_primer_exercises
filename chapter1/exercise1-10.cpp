#include <iostream>

/**
 * Use the decrement operator (--) to write a while that
 * prints the numbers from ten down to zero.
 */


int main(int argc, char const *argv[])
{
	int num = 10;
	while(num >= 0){
		std::cout << num << std::endl;
		--num;
	}
	return 0;
}