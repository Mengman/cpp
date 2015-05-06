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
    };

    pizza* a_pizza = new pizza;
    
    cout << "Enter the diameter of your pizza: ";
    cin >> a_pizza -> diameter;
    cin.get();
    cout << "Enter the brand of your pizza: ";
    getline(cin, a_pizza -> brand);
    cout << "Enter the weight of your pizza: ";
    cin >> a_pizza -> weight;

    cout << "Your pizza analysis result: " << endl;
    cout << "brand: " << a_pizza -> brand;
    cout << "\ndiameter: " << a_pizza -> diameter;
    cout << "\nweight: " << a_pizza -> weight << endl;
    delete a_pizza;

    return 0;
}
     
