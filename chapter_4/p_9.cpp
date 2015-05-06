#include <iostream>
#include <string>

int main()
{
    using namespace std;
    
    struct CandyBar
    {
         string brand;
         float weight;
         int calories;
    };

    CandyBar* snacks = new CandyBar[3];
    snacks[0] = { "America", 1.1, 1 };
    snacks[1] = { "Canada", 2.2, 2 };
    snacks[2] = { "China", 3.3, 3 };

    for(int i = 0; i < 3; i++ )
    {
        cout << "snacks[" << i << "] " << "brand = " << snacks[i].brand;
        cout << " weight = " << snacks[i].weight;
        cout << " calories = " << snacks[i].calories << endl;
    }

    delete [] snacks;

    return 0;
} 
