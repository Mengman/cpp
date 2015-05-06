#include <iostream>
#include <cstring>
#include <string>

int main()
{
    using namespace std;
    cout << "Enter your first name: ";
    string first_name;
    getline(cin, first_name);
    cout << "Enter your last name: ";
    string last_name;
    getline(cin, last_name);
    string name = last_name + ", " + first_name;
    cout << "Here's the information in a single string: " << name << endl;
    return 0;
}
