#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
private:
  double length;
  double width;

public:
  // constructor
  Rectangle(double l, double w) : length(l), width(w) {}

  // Setter for length
  void setLength(double l)
  {
    if (l > 0)
    {
      length = l;
    }
    else
    {
      cerr << "Length must be positive." << endl;
    }
  }

  // Setter for width
  void setWidth(double w)
  {
    if (w > 0)
    {
      width = w;
    }
    else
    {
      cerr << "Width must be positive." << endl;
    }
  }

  // Getter for calculated area
  double getArea() const
  {
    return length * width;
  }

  // Getter for calculated perimeter
  double getPerimeter() const
  {
    return 2 * (length + width);
  }
};

int main()
{
  Rectangle rect(10.0, 5.0);
  cout << "Area: " << rect.getArea() << endl;
  cout << "Perimeter: " << rect.getPerimeter() << endl;
  
  rect.setLength(12.0);
  rect.setWidth(45.345);
  cout << "New Area: " << rect.getArea() << endl;

  return 0;
}