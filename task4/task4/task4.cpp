// task4.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "stdlib.h"

double StringToInt(char *str, bool &err)
{
	char *pLastChar = NULL;
	double param = strtod(str, &pLastChar);
	err = ((*str == '\0') || (*pLastChar != '\0'));
	return param;
}

int _tmain(int argc, char* argv[])
{
	if (argc <= 1 || argc % 2 == 1)
	{
		printf("Program calculates the expression entered in the command line.\n");
		return 0;
	}

	double result = 0;

	for (int i = 1; i < argc; i += 2)
	{
		bool err;
		double param = StringToInt(argv[i], err);
		if (err)
		{
			printf("Argument #%d is uncorrect\n", i);
			printf("%s", argv[i]);
			return 1;
		}

		printf("%s ", argv[i]);
		
		if (i != argc - 1)
		{
			printf("%s ", argv[i + 1]);
		}
		
		if (i == 1)
		{ 
			result = param;
			continue;
		}
		
		if (i > 2)
		{
			if (argv[i - 1][0] == '+')
			{
				result += param;
			}
			else if (argv[i - 1][0] == '-')
			{
				result -= param;
			}
			else if (argv[i - 1][0] == '*')
			{
				result *= param;
			}
			else if (argv[i - 1][0] == '/')
			{
				if (param != 0)
				{
					result /= param;
				}
				else
				{
					printf("Operation #%d is uncorrect\n", i - 1);
					return 1;
				}
			}
			else
			{
				printf("Operation #%d is uncorrect\n", i - 1);
				return 1;
			}
		}
	}
	printf("= %.3lf", result);
	return 0;
}
