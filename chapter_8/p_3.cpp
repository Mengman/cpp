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
      cout << input << endl;

      cout << "Enter a string (q to quit): ";
      getline(cin, input);
  }

  return 0;

}

void convert_up_case(string & s)
{
  char * temp = s.data();
  while(temp != '\0')
  {

  }
  s = toupper(s);
}
