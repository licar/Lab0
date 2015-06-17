// task5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double GetDistance(double v0, double a0)
{
	return v0 * v0 * sin(2 * a0 * M_PI / 180) / M_G;
}

int _tmain(int argc, _TCHAR* argv[])
{
	double v0, a0;

	string str;

	do
	{
		cout << "Enter v0 (or type exit) : ";
		getline(cin, str);
		
		if (str == "exit")
		{
			cout << "Goodbuy";
			break;
		}
		v0 = stoi(str);

		cout << "Enter a0 (or type exit) : ";
		getline(cin, str);
		
		if (str == "exit")
		{
			cout << "Goodbuy";
			break;
		}
		a0 = stoi(str);

		cout << "Distance is " + to_string(GetDistance(v0, a0)) + '\n';
	} 
	while (str != "exit");
	return 0;
}

