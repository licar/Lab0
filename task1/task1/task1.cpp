#include "stdafx.h"

void PrintEvenNumbers()
{
	for (int i = 100; i >= 2; i -= 2)
	{
		printf("%d", i);

		if (i != 2)
		{
			printf(", ");
		}
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	int i;
	for (i = 1; i <= 10; ++i)
	{
		printf ("%d", i);
		
		if (i!= 10)
		{
			printf(", ");
		}
	}
	printf("\n");

	PrintEvenNumbers();

	return 0;
}

