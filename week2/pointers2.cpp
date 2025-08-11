#include <iostream>
using namespace std;

void multipleBy2(int &a, int &b, int &c)
{
  a *= 2;
  b *= 2;
  c *= 2;

  cout << a << b << c << "\n";
}
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
  cout << a << ", " << ch << "\n"; // 129,a

  // todo solve Q3
  int m = 1, n = 2, p = 3;
  multipleBy2(m, n, p);
  return 0;
}