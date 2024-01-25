#include <stdio.h>

int main()
{
	int a;

	printf("整数を入力してください：");
	scanf_s("%d", &a);

	if (a % 3 == 0 && a % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (a % 3 == 0)
	{
		printf("Fizz");
	}
	else if (a % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d\n", a);
	}

	return 0;
}
