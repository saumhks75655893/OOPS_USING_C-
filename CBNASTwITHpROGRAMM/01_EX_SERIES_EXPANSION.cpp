#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // code will be start here

  double sum = 1;
  int x, term, f = 1;
  cout << "Enter the value of x: ";
  cin >> x;
  cout << "Enter the value of term: ";
  cin >> term;

  for (int i = 1; i < term; i++)
  {
    int p = pow(x, i);
    f = f * i;
    double d = (double)p / f;
    sum += d;
  }

  cout << "The sum is: " << sum << endl;
  return 0;
}