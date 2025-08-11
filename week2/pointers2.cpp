#include <iostream>
using namespace std;

int main()
{
  // todo solve Q1
  int x;
  int *ptr = &x;
  x = 7;
  ptr = &x;
  cout << *ptr << "\n"; // 7

  // todo solve Q2
  int a = 32;
  int *ptr2 = &a;

  char ch = 'A';
  char &cho = ch;

  cho += a;
  *ptr2 += ch;
  cout << a << ", " << ch << "\n"; //129,a
  return 0;
}