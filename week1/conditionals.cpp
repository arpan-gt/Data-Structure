// todo  1.get a number from user and print whether it's positive , negative or zero
// todo  2.leap year or not
// todo  3. 3 digit number is Armstrong or not

#include <iostream>
using namespace std;

int main()
{
  // number is positive , negative , or zero
  float num;
  cout << "enter any number" << endl;
  cin >> num;
  if (num > 0)
  {
    cout << num << " is positive" << endl;
  }
  else if (num < 0)
  {
    cout << num << " is  negative" << endl;
  }
  else
  {
    cout << "number is " << num << endl;
  }

  // -----------------leap year or not----------------------------------------------------
  int year;
  cout << "enter a year" << endl;
  cin >> year;
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  {
    cout << year << " is a leap year" << endl;
  }
  else
  {
    cout << year << " is not a leap year" << endl;
  }

  //--------------------------Armstrong------------------------------------------------------
  int n, r, temp, sum = 0;
  cout << "enter a number" << endl;
  cin >> n;
  temp = n;

  while (n > 0)
  {
    r = n % 10;
    sum += (r * r * r);
    n = n / 10;
  }

  if (temp == sum)
  {
    cout << temp << " is Armstrong" << endl;
  }
  else
  {
    cout << temp << " is not Armstrong" << endl;
    ;
  }

  //----------------------------find value of x and y in following-------------------------

  int a = 63, b = 36;
  bool x = (a < b) ? true : false;
  int y = (a > b) ? a : b;
  cout << x << "," << y << endl;

  //------------------------------------------------------------

  int c = 5;

  if (++c * 5 <= 25)

  {
    cout << "Hello\n";
  }
  else
  {
    cout << "Bye\n";
  }

  // ------------------------------------larget of 2---------------------------------
  float a1, a2;
  cout << "enter value for a1\n";
  cin >> a1;
  cout << "enter value for a2\n";
  cin >> a2;

  if (a1 > a2)
  {
    cout << a1 << "\n";
  }
  else
  {
    cout << a2 << "\n";
  }

  //--------------------------------------------odd or even------------------------
  int number;
  cout << "enter number\n";
  cin >> number;
  if (number % 2 == 0)
  {
    cout << number << " is even\n";
  }
  else
  {
    cout << number << " is odd\n";
  }

  //----------------------income tax calculator basic--------------------------------
  float income;
  cout << "Enter income\n";
  cin >> income;

  if (income >= 0 && income <= 500000)
  {
    cout << "0% tax on income " << income << "\n";
    cout << "amout after deducting tax " << income - ((income * 0) / 100) << "\n";
  }
  else if (income > 500000 && income <= 1000000)
  {
    cout << "20% tax on income " << income << "\n";
    cout << "amout after deducting tax " << income - ((income * 10) / 100) << "\n";
  }
  else
  {
    cout << "30% tax on income " << income << "\n";
    cout << "amout after deducting tax " << income - ((income * 30) / 100) << "\n";
  }

  //------------------------largest of 3 numbers---------------------------------------
  float l1, l2, l3;
  cout << "enter l1 value\n";
  cin >> l1;
  cout << "enter l2 value\n";
  cin >> l2;
  cout << "enter l3 value\n";
  cin >> l3;

  if (l1 >= l2 && l1 >= l3)
  {
    cout << l1 << " is greatest\n";
  }
  else if (l2 >= l1 && l2 >= l3)
  {
    cout << l2 << " is greatest\n";
  }
  else
  {
    cout << l3 << " is greatest\n";
  }

  return 0;
}