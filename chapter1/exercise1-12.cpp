
/**
 * What does the following for loop do? What is the final value of sum?
 * The loop sums up numbsers from -100 through 100.
 * The final value of sum is 0.
 */
int main(int argc, char const *argv[])
{
	
	int sum = 0;
	for (int i = -100; i <= 100; i++)
		sum += i;
	return 0;
}