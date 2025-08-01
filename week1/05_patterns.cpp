// todo 1. WAP to print binaryPattern 1/0
// todo 2. WAP to print rhombus pattern
// todo 3. WAP to print palindrome pattern

#include <iostream>
using namespace std;

//* * 1.
void printBinaryPattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    int current = i % 2;
    for (int j = 1; j <= i; j++)
    {
      cout << current;
      current = 1 - current;
    }
    cout << "\n";
  }
}

// * * 2.

void printRhombus(int n)
{
  cout << "\nrhombus pattern\n";
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int k = 1; k <= n; k++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}

// * * 3.
void printPalindrome(int n)
{
  cout << "\n Palindrome pattern\n";

  for (int i = 1; i <= n; i++)
  {

    for (int j = 1; j <= n - i; j++)
    {
      cout << "  ";
    }

    for (int k = i; k >= 1; k--)
    {
      cout << k << " ";
    }

    for (int l = 2; l <= i; l++)
    {
      cout << l << " ";
    }
    cout << "\n";
  }
}
int main()
{
  printBinaryPattern(5);
  printRhombus(5);
  printPalindrome(5);
  return 0;
}