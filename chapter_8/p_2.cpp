#include<iostream>

struct CandyBar
{
  char * brand;
  double weight;
  int calories;
};


void modify_CandyBar(CandyBar & candyBar, char * brand = "Millennium Munch", double weight = 2.85, int calories = 350);

void display_CandyBar(const CandyBar & candyBar);

int main()
{
  CandyBar kitkat = {"Nestle", 5.6, 400};
  std::cout << "CandyBar before modify: \n";
  display_CandyBar(kitkat);
  modify_CandyBar(kitkat);
  std::cout << "CandyBar after modify: \n";
  display_CandyBar(kitkat);

  return 0;
}

void display_CandyBar(const CandyBar & candyBar)
{
  std::cout << "brand: " << candyBar.brand << std::endl;
  std::cout << "weight: " << candyBar.weight << std::endl;
  std::cout << "calories: " << candyBar.calories << std::endl;
}

void modify_CandyBar(CandyBar & candyBar, char * brand, double weight, int calories)
{
  candyBar.brand = brand;
  candyBar.weight = weight;
  candyBar.calories = calories;
}
