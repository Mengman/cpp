#include <iostream>

unsigned Fill_array(double arr[], unsigned size);

void Show_array(double arr[], unsigned size);

void Reverse_array(double arr[], unsigned size);

int main()
{
	double arr[10];
	unsigned size = Fill_array(arr, 10);
	
	Show_array(arr, size);
	
	std::cout << "Reversing the whole array\n";
	Reverse_array(arr, size);
	Show_array(arr, size);
	
	std::cout << "Revering the array but the first and the last element\n";
	Reverse_array(arr+1, size-2);
	Show_array(arr, size);
	
	return 0;
}

unsigned Fill_array(double arr[], unsigned size)
{
	std::cout << "Please enter at most " << size << " numbers: \n";
	int i = 0;
	double temp;
	while((std::cin >> arr[i]) && i < size)
	{
		 i++;
	}
	return i;
}


void Show_array(double arr[], unsigned size)
{
	std::cout << "Display the array: \n";
	for(int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void Reverse_array(double arr[], unsigned size)
{
	unsigned head, tail;
	double temp;
	for(head = 0, tail = size -1; head < tail; head++, tail--)
	{
		temp = arr[head];
		arr[head] = arr[tail];
		arr[tail] = temp;
	}
}