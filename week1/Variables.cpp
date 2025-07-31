// todo  1. input side of square and output area
// todo  2. bill of 3 items using 18%GST
// todo  3. build a simple interest calculator
// todo  4. calculate area of circle

#include <iostream>
using namespace std;

int main()
{

  // area of square
  float side;
  cout << "enter length of side of square" << endl;
  cin >> side;
  float area = side * side;
  cout << "Area of square of side " << side << " : " << area << "sq. unit" << endl;

  // cost of items after 18% GST
  float item1, item2, item3;
  cout << "enter cost of item 1 " << endl;
  cin >> item1;
  cout << "enter cost of item 2" << endl;
  cin >> item2;
  cout << "enter cost of item3" << endl;
  cin >> item3;

  float totalItemsCost = item1 + item2 + item3;
  float totalCost = totalItemsCost + ((totalItemsCost * 18) / 100);

  cout << "Total cost of items after 18% GST : " << totalCost << endl;

  // simple interest calculator
  float principal, rate, time;
  cout << "enter value of principal" << endl;
  cin >> principal;
  cout << "enter value of rate" << endl;
  cin >> rate;
  cout << "enter value of time(years)" << endl;
  cin >> time;
  float simpleInterest = (principal * rate * time) / 100;

  cout << "simple Interest for principle " << principal << " at rate " << rate << " for time" << time << " years : " << simpleInterest << endl;

  // area of circle
  float radius;
  cout << "enter radius of circle" << endl;
  cin >> radius;
  float circleArea = 3.14 * radius * radius;
  cout << "area of circle with radius " << radius << " : " << circleArea << "sq. unit" << endl;
  return 0;
}
