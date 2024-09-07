#include <stdio.h>

int main()
{
	int a = 15;

	for (int i = 0; i < a/2; i++)
	{
		for (int j = 0; j <a / 2 -i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < (i + 1)*2-1; j++)
		{
			printf("+");
		}

		printf("\n");
	}
	for (int i = 0; i < a; i++)
	{
		printf("+");
	}
	printf("\n");
	for (int i = 0; i < a / 2; i++)
	{
		for (int j = 0; j <i+1; j++)
		{
			printf(" ");
		}
		for (int j = 0; j <a-(i+1); j++)
		{
			printf("+");
		}

		printf("\n");
	}
}
