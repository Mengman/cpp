#include<iostream>

double factorial(double arg);

int main ()
{
	double arg;
	std::cout << "Please enter a number: " << std::endl;
	while(std::cin >> arg && arg >= 0) 
	{
		std::cout << "The factorial of " << arg << " is: ";
		std::cout << factorial(arg) << std::endl;
		std::cout << "Next number to calclate factoroial(q to quit): " << std::endl;
		
	}
	std::cout << "bye\n";
	return 0;
}


double factorial(double arg)
{
	double result = 1.0;
	if(arg == 0)
	{
		return result;
	}
	while(arg > 0)
	{
		result *= arg--; 
	}
	
	return result;
}