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
  return 0;
}