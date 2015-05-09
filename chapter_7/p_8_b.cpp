#include <iostream>

const int Seasons = 4;
const char * Snames[] = {"Spring", "Summer", "Fall", "Winter"};

struct expenses {
	double spring;
	double summer;
	double fall;
	double winter;
};

void fill(expenses * e);
void show(expenses e);

int main()
{
	expenses e;
	fill(&e);
	show(e);
	
	return 0;
}

void fill(expenses * e)
{
	using namespace std;
	for(int i=0; i < Seasons; i++)
	{
		cout << "Enter "<< Snames[i] << " expenses: ";
		switch(i) 
		{
			case 0 : cin >> e->spring;
			break;
			case 1 : cin >> e->summer;
			break;
			case 2 : cin >> e->fall;
			break;
			case 3 : cin >> e->winter;
			default: ; 
		} 
	}
}

void show(expenses e)
{
	using namespace std;
	double total = 0.0;
	cout << "\nExpenses\n";
	for(int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $";
		switch(i)
		{
			case 0 : cout << e.spring;
			total += e.spring;
			break;
			case 1 : cout << e.summer;
			total += e.summer;
			break;
			case 2 : cout << e.fall;
			total += e.fall;
			break;
			case 3 : cout << e.winter;
			total += e.winter;
			default: ; 
		}
		cout << endl;
	}
	cout << "Total Expenses: $" << total << endl;
}