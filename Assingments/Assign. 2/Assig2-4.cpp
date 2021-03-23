#include <iostream>
using namespace std;

int main()
{
  int i = 65;

  while (i <= 90)
  {
    cout << (i % 5 ? ' ' : '\n') << static_cast<char>(i);
    i++;
  }
}