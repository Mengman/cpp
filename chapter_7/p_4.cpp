#include<iostream>

long double probability(unsigned field, unsigned mega, unsigned picks);

int main()
{
	using namespace std;
	double field, choices, mega;
	cout << "Enter the field number of choices on the game and the number of field number allowed to pick, and mega numbers" << endl;
	while((cin >> field >> choices >> mega) && field <= field)
	{
		cout << "You have chance in ";
		cout << probability(field, mega, choices);
		cout << " of winning.\n";
		cout << "Next three numbers (q to quit): ";
	} 
	
	cout << "bye\n";
	return 0;
}

long double probability(unsigned field, unsigned mega, unsigned picks)
{
	long double result = 1.0, temp = 1.0;
	long double n;
	unsigned p;
	
	for(n = field, p = 0; p < picks ; n--, p--)
	{
		temp *= n - p;
	}
	result = 1.0 / (temp * mega) ;
	return result;
}