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

    CandyBar snacks[3] = 
    {
        {"America", 1.1, 1},
        {"Canada", 2.2, 2},
        {"China", 3.3, 3}
    };

    for(int i = 0; i < 3; i++)
    {
        cout << "snacks[" << i << "]" << " brand = " << snacks[i].brand << " weight = " << snacks[i].weight << " calories = " << snacks[i].calories << endl;
    }
    
    return 0;
} 
