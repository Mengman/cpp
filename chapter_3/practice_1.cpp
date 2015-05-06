#include <iostream>

int convertFeet2Inch(int);

int main() {
    
    using namespace std;
 
    cout << "Please enter the height in inches" << endl;

    int height;
    cin >> height;
    cout << "The height is " << convertFeet2Inch(height) << " inches." << endl;

    return 0;
}

int convertFeet2Inch(int feet) {
    
    const int Feet_inch_factor = 12;
    return feet * Feet_inch_factor;
} 
