#include <iostream>
#include <array>
int main()
{
    using namespace std;
    array<float, 3> dash_times;

    cout << "Enter the first time of 40-meter dash: ";
    cin >> dash_times[0]; 
    cout << "\nEnter the second time of 40-meter dash: ";
    cin >> dash_times[1]; 
    cout << "\nEnter the third times of 40-meter dash: ";
    cin >> dash_times[2];
    cout << "First: " << dash_times[0] << endl;
    cout << "Second: " << dash_times[1] << endl;
    cout << "Third: " << dash_times[2] << endl;
    cout << "Average: " << (dash_times[0] + dash_times[1] + dash_times[2]) / 3 << endl;

    return 0;
}
