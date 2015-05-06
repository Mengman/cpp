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
    
    CandyBar snack = 
    {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "snack.brand = " << snack.brand << endl;
    cout << "snack.weight = " << snack.weight << endl;
    cout << "snack.calories = " << snack.calories << endl;

    return 0;
} 
