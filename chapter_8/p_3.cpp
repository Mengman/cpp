#include <iostream>
#include <string>

using namespace std;

void convert_up_case(string & s);

int main()
{

  string input;
  cout << "Enter a string (q to quit): ";
  getline(cin, input);
  while(input != "q")
  {
    convert_up_case(input);

      cout << "Enter a string (q to quit): ";
      getline(cin, input);
  }
  if (input == "q")
  {
    cout << "Bye.\n";
  }

  return 0;
}

void convert_up_case(string & s)
{
  const char * char_pointer = s.c_str();
  while(* char_pointer != '\0')
  {
    cout << (char) toupper(* char_pointer);;
    char_pointer++;
  }

  cout << '\n';
}
