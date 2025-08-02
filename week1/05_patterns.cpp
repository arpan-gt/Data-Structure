// todo 1. WAP to print binaryPattern 1/0
// todo 2. WAP to print rhombus pattern
// todo 3. WAP to print palindrome pattern
// todo 4. WAP to print hollowSquare pattern
// todo 5. WAP to print star triangle |\ pattern
// todo 6. WAP to print invertedStar triangle pattern
// todo 7. WAP to print half Pyramid pattern
// todo 8. WAP to print character pyramid pattern
// todo 9. WAP to print hollow rectangle pattern
// todo 10. WAP to print inverted Rotated pyramid pattern
// todo 11. WAP to print floyd triangle pattern
// todo 12. WAP to print diamond pattern
// todo 13. WAP to print butterfly pattern

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

// * * 4.
void printHollowSquare(int n)
{
  cout << "\nHollow Square\n";
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == 1 || i == n || j == 1 || j == n)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << "\n";
  }
}

//-------* triangle|\ pattern

void triangle(int n)
{
  cout << "\ntriangle pattern\n";
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}

// invertedStar
void invertedTriangle(int n)
{
  cout << "\nInverted Star Pattern\n";
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}

// half pyramid
void printHalfPyramid(int n)
{
  cout << "\n half pyramid\n";
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    cout << "\n";
  }
}

// characterPyramid
void characterPyramid(int n)
{
  cout << "\ncharacter Pyramid\n";
  char c = 'A';
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << c;
      c++;
    }
    cout << "\n";
  }
}

// hollow reectangle
void hollowRectangle(int n)
{
  cout << "\nhollow rectangle\n";
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n + 2; j++)
    {
      if (i == 1 || i == n || j == 1 || j == n + 2)
      {
        cout << " * ";
      }
      else
      {
        cout << "   ";
      }
    }
    cout << "\n";
  }
}

// innvertedRotatedPyramid
void invertedRotatedPyramid(int n)
{
  cout << "\nInverted Rotated Pyramid\n";
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << "   ";
    }
    for (int k = 1; k <= i; k++)
    {
      cout << " * ";
    }
    cout << "\n";
  }
}

// floyd's triangle
void floydTriangle(int n)
{
  cout << "\nfloyd triangle\n";
  int num = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << " " << num << " ";
      num++;
    }
    cout << "\n";
  }
}

// diamond pattern
void diamond(int n)
{
  cout << "\nDiamond\n";
  // upper part
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      cout << "*";
    }

    cout << "\n";
  }

  // lower part

  for (int i = 1; i <= n - 1; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= 2 * (n - i) - 1; j++)
    {
      cout << "*";
    }

    cout << "\n";
  }
}

// butterfly
void butterfly(int n)
{
  cout << "\nbutterfly pattern \n";
  // // upper part
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    for (int j = 1; j <= 2 * (n - i); j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }

  // lower
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    for (int k = 1; k <= 2 * (n - i); k++)
    {
      cout << " ";
    }
    for (int l = 1; l <= i; l++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}

int main()
{
  printBinaryPattern(5);
  printRhombus(5);
  printPalindrome(5);
  printHollowSquare(8);
  triangle(5);
  invertedTriangle(5);
  printHalfPyramid(5);
  characterPyramid(5);
  hollowRectangle(5);
  invertedRotatedPyramid(5);
  floydTriangle(5);
  diamond(5);
  butterfly(4);
  return 0;
}