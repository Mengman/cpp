#include<iostream>

struct box
{
	char maker[40];
	float height;
	float lenght;
	float width;
	float volume;
};

void displayByValue(box b);

void displayByAddress(box * b);

int main()
{
	box b = {"this is a box", 20.0, 30.0, 40.0, 50.0};
	displayByValue(b);
	displayByAddress(&b);
	return 0;
}

void displayByValue(box b)
{
	std::cout << "Box maker: " << b.maker << std::endl;
	std::cout << "height: " << b.height << std::endl;
	std::cout << "lenght: " << b.lenght << std::endl;
	std::cout << "width: " << b.width << std::endl;
	std::cout << "volume: " << b.volume << std::endl;
}

void displayByAddress(box * b) 
{
	std::cout << "Box maker: " << b->maker << std::endl;
	std::cout << "height: " << b->height << std::endl;
	std::cout << "lenght: " << b->lenght << std::endl;
	std::cout << "width: " << b->width << std::endl;
	std::cout << "volume: " << b->volume << std::endl;
}