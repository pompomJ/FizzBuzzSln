#include <stdio.h>

/* 入力された整数が、3で割り切れる場合は"Fizz"、 5で割り切れる場合は"Buzz"
　3でも5でも割り切れる場合は"FizzBuzz"、それ以外の場合は入力された整数を
　出力 */

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
