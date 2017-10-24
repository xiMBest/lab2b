// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
#include "iostream"
#include <Windows.h>


int main()
{
	double BeginOfRange, EndOfRange, step, fault, result, x, sum, k;
	printf_s("Enter your Begin of Range:");
	scanf_s("%lf", &BeginOfRange);
	printf_s("Enter your End of Range:");
	scanf_s("%lf", &EndOfRange);
	printf_s("Enter your Step:");
	scanf_s("%lf", &step);
	printf_s("Enter your Folt:");
	scanf_s("%lf", &fault);
	for (x = BeginOfRange; x <= EndOfRange + 0.5*step; x += step)
	{
		k = 1;
		sum = 0;
		result = 1.0;
		do
		{
			result = (pow((-1), k))*(pow(cos(pow(2, k)*x), 4)) / pow(2, 2 * k);
			sum += result;
			k++;
		} while (fabs(result > fault));
		printf_s("For the x=%lf Sum=%lf The Result=%lf\n", x, sum, result);
	}


	system("pause");
	return 0;
}

