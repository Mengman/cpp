#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char first_name[10];
    cout << "Enter your first name: ";
    cin.getline(first_name, 10);
    cout << "\nEnter your last name: ";
    char last_name[10];
    cin.getline(last_name, 10);
    char full_name[20];
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);
    cout << "Here's the information in a single string: " << full_name << endl;
    
    return 0;
} 
