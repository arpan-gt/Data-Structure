#include <iostream>
using namespace std;

void passbByValue(int param)
{
  cout << param;
  int a = 20;
  cout << "pass by value , a: " << a << "\n";
}

void passByReference(int param1, int param2, int param3)
{
  param1 *= 2;
  param2 *= 2;
  param3 *= 2;
  cout << param1 << "\n"
       << param2 << "\n"
       << param3 << "\n";
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