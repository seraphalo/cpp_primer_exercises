#include <iostream>

/**
 * Write a program that prompts ther user for two integers.
 * Print each number in the range specified by those two integers.
 * 
 * A very interesting question. For those who knows how to program,
 * the natural way would be to use if statement to try to decide
 * which number is bigger. But here we only have standard input and
 * output along with while statement. Thus we can have 2 whiles so
 * that all cases will be covered.
 */


int main(int argc, char const *argv[])
{
	int n, m;
	std::cout << "enter two integers:" << std::endl;
	std::cin >> n >> m;
	std::cout << "numbers between " << n << 
		" and " << m << " are:" << std::endl;
	while(n > m){
		std::cout << m << std::endl;
		m++;
	}
	while(m >= n){
		std::cout << n << std::endl;
		n++;
	}
	return 0;
}