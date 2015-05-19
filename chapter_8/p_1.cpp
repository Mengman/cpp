#include<iostream>

void print_string(const char * string, unsigned i= 0);

static int function_call_times = 0;

int main()
{
  print_string("Do not go gentle into that good night");
  print_string("Old age shold burn and rave at close of day", 4);
  print_string("Rage, rage against the dying of the night", 5);
  return 0;
}

void print_string(const char * string, unsigned i)
{
  if(i)
  {

    for(int j = 0; j <= function_call_times; j++)
    {
      std::cout << string << std::endl;
    }

  }
  else
  {
    std::cout << string << std::endl;
  }

  function_call_times++;
}
