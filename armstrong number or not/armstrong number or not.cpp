#include<stdio.h>
#include<math.h>
int main()
{
	int num, test_number, remainder, n = 0;
	int result = 0;
	printf("Enter a postive integer : ");
	scanf_s("%d", &num);
	test_number = num;
	for (test_number = num; test_number != 0; n++)
	{
		test_number = test_number / 10;
	}

	for (test_number = num; test_number != 0; test_number = test_number / 10)
	{
		remainder = test_number % 10;
		result = result + pow(remainder, n);
	}
	if (result == num)
	{
		printf("\n%d is an armstrong number.\n", num);
	}
	else
	{
		printf("\n%d is not an arsmstrong number.\n", num);
	}
	return 0;
}