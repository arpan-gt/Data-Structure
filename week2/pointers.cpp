#include <iostream>
using namespace std;

void passbByValue(int x)
{
  cout << x;
  int a = 20;
  cout << "pass by value , a: " << a << "\n";
}

void passByReference(int a, int b, int c)
{
  a *= 2;
  b *= 2;
  c *= 2;
  cout << a << "\n"
       << b << "\n"
       << c << "\n";
}
int main()
{
  int a = 5;
  int *ptr = &a;
  int **ptr2 = &ptr;
  cout << "*ptr: " << *ptr << "\n";
  cout << "ptr: " << ptr << "\n";
  cout << "**ptr2: " << *ptr2 << "\n";
  cout << "**ptr2: " << ptr2 << "\n";
  cout << "**ptr2: " << **ptr2 << "\n";

  float *emptr = NULL;
  cout << "null ptr: " << emptr << "\n";
  int *zeroptr = 0;
  cout << "zeroptr ptr: " << zeroptr << "\n";

  passbByValue(a);
  passByReference(2, 4, 6);
  return 0;
}