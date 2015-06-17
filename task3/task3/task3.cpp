// task3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <limits.h>

void PrintFibonacciNumbers(int N)
{
	if (N < 1 || N > INT_MAX)
	{
		return;
	}

	int prev = 1;
	int curr = 1;
	
	printf("%d, %d, ", prev, curr);


	while (curr <= N)
	{
		if (curr % 5 == 0)
		{
			printf("\n");
		}
		
		int bufCurr = curr;
		curr += prev;
		prev = bufCurr;

		printf("%d", curr);

		if (curr != N)
		{
			printf(", ");
		}
	}
	
}


int _tmain(int argc, _TCHAR* argv[])
{
	int N;
	printf("N = ");
	scanf_s("%d", &N);
	PrintFibonacciNumbers(N);
	return 0;
}

