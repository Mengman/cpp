#include <iostream>
#include <string>

int main()
{
    using namespace std;
    struct pizza
    {
        string brand;
        int diameter;
        float weight;
    } a_pizza;


    cout << "Enter the brand of your pizza: ";
    getline(cin, a_pizza.brand);
    cout << "Enter the diameter of your pizza: ";
    cin >> a_pizza.diameter;
    cout << "Enter the weight of your pizza: ";
    cin >> a_pizza.weight;
    cout << "Your pizze analysis result: " << endl;
    cout << "brand: " << a_pizza.brand << "\ndiameter: " << a_pizza.diameter << "\nweight: " << a_pizza.weight << endl;
    return 0;
} 
