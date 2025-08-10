// todo 1. WAP to find factorial
// todo 2. WAP to print multiplication table
// todo 3. WAP to print fibonacci series upto n numbers
// todo 4. WAP to check if Armstrong or not

#include <iostream>
using namespace std;
#include <math.h>

//* * --------- factorial--------------------------
int factorial(int n)
{
  if (n < 0)
  {
    cout << "factorial for negative numbers is not defined\n";
    return -1;
  }
  int fact = 1;
  for (int i = n; i >= 1; i--)
  {
    fact *= i;
  }
  cout << "factorial for " << n << " is " << fact << "\n";
  return fact;
}

// table
void multiplicationTable(int n)
{
  cout << "Table of " << n << "\n";
  for (int i = 1; i <= 10; i++)
  {
    cout << n << " * " << i << " = " << n * i << "\n";
  }
}

//----fibonacci
void fibonacci(int n)
{
  cout << "fibonacci series up to " << n << "\n";
  if (n == 0)
  {
    cout << "Please enter a number greater than 0\n";
    return;
  }
  int first = 0, second = 1;

  if (n == 1)
  {
    cout << first << "\n";
    return;
  }

  cout << first << " " << second << " ";

  for (int i = 3; i <= n; i++)
  {
    int next = first + second;
    cout << next << " ";
    first = second;
    second = next;
  }
  cout << "\n";
}

// Armstrong or not

void isArmStrong(int n)
{
  int original = n;
  int temp;
  int digits = 0;
  int sum = 0;

  temp = n;
  while (temp > 0)
  {
    temp /= 10;
    digits++;
  }

  temp = n;
  while (temp > 0)
  {
    int digit = temp % 10;
    sum += pow(digit, digits);
    temp /= 10;
  }

  if (sum == original)
  {
    cout << original << " is Armstrong\n";
  }
  else
  {
    cout << original << " not an Armstrong\n";
  }
}

int binaryToDecimal(int num)
{
  int n = num;
  int pow = 1;
  int decimal = 0;

  while (n > 0)
  {
    int lastDigit = n % 2;
    decimal += lastDigit * pow;
    pow *= 2;
    n /= 10;
  }
  return decimal;
}
int main()
{
  // factorial(5);
  // multiplicationTable(5);
  // fibonacci(5);
  // isArmStrong(123);
  cout << binaryToDecimal(1111) << "\n";
}