#include <iostream>
int main()
{
    using namespace std;
    cout << "What is your first name? ";
    char first_name[10];
    cin.getline(first_name, 10);
    cout << "\nWhat is your last name? ";
    char last_name[5];
    cin.getline(last_name, 5);
    cout << "\nWhat letter grade do you deserve? ";
    char grade;
    cin >> grade;
    cout << "\nWhat is your age? ";
    int age;
    cin >> age;
    cout << "nName: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char (grade + 1) << endl;
    cout << "Age: " << age << endl;
    
    return 0;
} 
