#include <iostream>

double add(double arg1, double arg2);
double subtract(double arg1, double arg2);
double multiply(double arg1, double arg2);
double division(double arg1, double arg2);
double calculate(double arg1, double arg2, double (*f) (double, double));

int main()
{
	using namespace std;
	cout << "Enter two numbers: ";
	double arg1, arg2;
	double (*pf[4]) (double, double) = {add, subtract, multiply, division};
	while(cin >> arg1 >> arg2)
	{
		cout << "calculate sum, difference, product and quotient are:\n";
		for(int i = 0; i < 4; i++)
		{
			cout << calculate(arg1, arg2, *pf[i]) << endl;
		}
		cout << "Enter other two numbers(enter q to quit): ";
	}
	cout << "bye~";
}

double add(double arg1, double arg2)
{
	return arg1 + arg2;
}

double subtract(double arg1, double arg2)
{
	return arg1 - arg2;
}

double multiply(double arg1, double arg2)
{
	return arg1 * arg2;
}

double division(double arg1, double arg2)
{
	return arg1 / arg2;
}

double calculate(double arg1, double arg2, double (*pf)(double, double))
{
	return (*pf)(arg1, arg2);
}