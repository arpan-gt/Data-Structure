#include <iostream>
using namespace std;
int main()
{

  // ------------------ n natural numbers-----------------------------------
  int n;
  cout << "enter value for natural numbers\n";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cout << i << "\n";
  }

  //---------------------sum of n natural numbers-------------------------------
  int sum = 0, n2;
  cout << "enter numbers of natural number\n";
  cin >> n2;
  for (int i = 1; i <= n2; i++)
  {
    sum += i;
  }
  cout << "sum of first " << n2 << " natural numbers is " << sum << "\n";

  // ----------------------while loop----------------------------------------------

  int n3 = 5;
  while (n3 > 0)
  {
    cout << n3 << "\n";
    n3--;
  }

  //--------------------square pattern * using for loop------------------------
  int n4;
  cout << "enter number of rows or columns\n";
  cin >> n4;
  for (int i = 0; i < n4; i++)
  {
    for (int j = 0; j < n4; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }

  //-----------------print num from n to 1
  int n5;
  cout << "enter value of n\n";
  cin >> n5;
  for (int i = n5; i >= 1; i--)
  {
    cout << i << "\n";
  }

  //-------------------sum of digits of a number in while loop------------------------------------
  int n6, temp, sumofDigits=0;
  cout << "enter value to calculate sum of digits\n";
  cin >> n6;
  temp = n6;
  while (temp > 0)
  {
    int lastDigit = temp % 10;
    sumofDigits += lastDigit;
    temp /= 10;
  }
  cout << "sum of digits of " << n6 << " is " << sumofDigits << "\n";

  //--------------------sum of odd digits of a number-----------------------------
  int n7, temp2, oddDigitSum=0;
  cout << "enter a number to find sum of odd digits\n";
  cin >> n7;
  temp2 = n7;

  while (temp2 > 0)
  {
    int lastDigit = temp2 % 10;
    if (lastDigit % 2 != 0)
    {
      oddDigitSum += lastDigit;
    }
    temp2 /= 10;
  }

  cout << "sum of odd digits of number " << n7 << " is " << oddDigitSum << "\n";
  return 0;
}
// 1024