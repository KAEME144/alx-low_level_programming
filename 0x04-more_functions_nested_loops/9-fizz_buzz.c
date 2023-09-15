#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers and the n a new line till 100
 * for multiples of three it prints fizz in place of the number
 * and then prints buzz for multiples of five
 * Return: ALWAYS 0 (SUCCESS)
 */
int main(void)
{
	int i;

	for (i =  1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
