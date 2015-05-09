#include <iostream>

const int Max = 5;

double * fill_array(double ar[], int limit);

void show_array(const double ar[], const double * tail);

void revalue(double r, double ar[], double * tail);

int main()
{
	using namespace std;
	double properties[Max];
	
	double * tail = fill_array(properties, Max);
	
	show_array(properties, tail);
	
	if (tail != properties)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while(!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, tail);
		show_array(properties, tail);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

double * fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i;
	for(i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return &ar[i];
}


void show_array(const double ar[], const double * tail)
{
	using namespace std;
	for(int i = 0; tail != &ar[i]; i++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}

void revalue (double r, double ar[], double * tail)
{
	for(int i = 0; tail != &ar[i]; i++)
	{
		ar[i] *= r;
	}
}