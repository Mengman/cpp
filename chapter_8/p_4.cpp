#include <iostream>
using namespace std;
#include <cstring>
struct stringy {
  char * str;
  int ct;     //length of string (not counting '\0')
};

void set(stringy & str_struct, char* chars);

void show(const stringy & str_struct, int number = 2);

void show(const char* chars, int number = 2);

int get_chars_size(const char* chars);

int main()
{
  stringy beany;
  char testing[] = "Reality isn't what is used to be.";

  set(beany, testing);
  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing, 3);
  show("Done!");
  return 0;
}


void set(stringy & str_struct, char* chars )
{
  int char_array_size = get_chars_size(chars);

  char temp [] = new char[char_array_size];

  str_struct.str = & temp;
  str_struct.ct = char_array_size;

  for(int i = 0; i < char_array_size; i++)
  {
    temp[i] = chars[i];
  }
  cout << * str_struct.str << endl;
}

void show (const stringy & str_struct, int number)
{
  if(str_struct.ct < number)
  {
    number = str_struct.ct;
  }

  for(int i = 0; i < number; i++)
  {
    cout <<  str_struct.str[i];
  }
  cout << '\n';
}


void show (const char* chars, int number)
{
  int char_array_size = get_chars_size(chars);

  if(char_array_size < number)
  {
    number = char_array_size;
  }

  for(int i = 0; i < number; i++)
  {
    cout << chars[i];
  }
  cout << '\n';
}

int get_chars_size(const char * chars)
{
  int char_array_size = 0;
  while(chars[char_array_size++] != '\0')
  {

  }
  return char_array_size;
}
