#include <iostream>

/**
Explain whether the following program fragment is legal.
std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
If the program is legal, what does it do?
If the program is not legal, why not? How would you fix it?

Well, it's not. The `<<` operator is a binary operator,
meaning it takes two operands. In the second line and third
line of the program, the left most `<<` operator has only
one operand on its right. Thus, the program is not legal.
We need to add std::cout on its left.
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