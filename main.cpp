#include <iostream>
using namespace std;

int main() 
{
  int n = 0;

  while(n <= 100)
  {
    int y1 = 100 * n + 10;
    int y2 = 5 * n * n + 2;
    // Define variables y1 and y2 in terms of n
    
    cout << "n: " << n << "\ty1: " << y1 << "\ty2: " << y2 << endl;
    // Prints values of n, y1, and y2 each iteration

    if (y1 < y2)
      cout <<  "y1 < y2" << endl << endl;
    else if (y1 > y2)
      cout  << "y1 > y2" << endl << endl;
    else
      cout << "y1 = y2" << endl << endl;
    // Prints the comparison of y1 and y2

    n += 10;
    // Iterates n by 10
  }

}