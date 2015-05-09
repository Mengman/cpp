#include <iostream>

const int Seasons = 4;
const char * Snames[] = 
	{"Spring", "Summer", "Fall", "Winter"};
	
void fill(double da[], int size);
void show(double da[], int size);

int main()
{
	double expenses[Seasons];
	
	fill(expenses, Seasons);
	show(expenses, Seasons);
	
	return 0;
}

void fill(double da[], int size)
{
	using namespace std;
	for(int i=0; i < size; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> da[i];
	}
}

void show(double da[], int size)
{
	using namespace std;
	double total = 0.0;
	cout << "\nExpenses\n";
	for (int i = 0; i < size; i++)
	{
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}