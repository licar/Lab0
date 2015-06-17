// task2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <assert.h>

int DigitsSum(int i)
{
	int sum = 0;

	while (i != 0)
	{
		sum += i % 10;
		i /= 10;
	}
	return sum;
}

void PrintNumbersDivisible(int upperBound)
{
	if (upperBound < 1)
	{
		return;
	}

	for (int i = 1; i <= upperBound; ++i)
	{
		if (i % DigitsSum(i) == 0)
		{
			printf("%d", i);

			if (i != upperBound)
			{
				printf(", ");
			}
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int upperBound;
	printf("upper bound = ");
	scanf_s("%d", &upperBound);
	PrintNumbersDivisible(upperBound);
	return 0;
}

