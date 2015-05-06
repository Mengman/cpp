#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    string name;
    string dessert;

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious Radish " << dessert;
    cout << " for you, " << name << "." << endl;

    return 0;
}
