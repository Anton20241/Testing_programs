#include <iostream>

int check(int got, int expected)
{
	if (got != expected)
	{
		return 1;
	}
}

int summ(int a, int b)
{
	return a + b;
}


int main()
{
	int result = 0;
	result = check(summ(5, 5), 10);
	result = check(summ(2, 5), 7);
	return result;
}