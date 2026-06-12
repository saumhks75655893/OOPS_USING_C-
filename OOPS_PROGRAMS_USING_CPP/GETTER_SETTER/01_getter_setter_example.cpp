#include <iostream>
#include <string>
#include <stdexcept> // For std::runtime_error

using namespace std;

class Product
{
private:
  string name;
  double price;
  int stockQuantity;

public:
  Product(const string &name, double price, int stockQuantity) : name(name), price(price), stockQuantity(stockQuantity) {}

  // Getter for price
  double getPrice() const
  {
    return price;
  }

  // Setter for stockQuantity with complex validation
  void setStockQuantity(int newQuantity)
  {
    if (newQuantity < 0)
    {
      throw runtime_error("Stock quantity cannot be negative, " + to_string(newQuantity));
    }
    if (newQuantity > 1000)
    {
      throw runtime_error("Maximum stock quantity allowed is 1000, " + to_string(newQuantity));
    }
    // Additional business logic validation, e.g., if reorder point is met
    if (newQuantity < 50 && stockQuantity >= 50)
    {
      cout << "Warning: Stock quantity is low, consider reordering for " << name << endl;
    }
    stockQuantity = newQuantity;
  }

  // Getter for stockQuantity
  int getStockQuantity() const
  {
    return stockQuantity;
  }

  // Getter for name
  string getName() const
  {
    return name;
  }
};

int main()
{
  Product laptop("Gaming Laptop", 1200.0, 100);

  try
  {
    laptop.setStockQuantity(100); // Valid, triggers low stock warning
    cout << "Laptop stock: " << laptop.getStockQuantity() << " and Stock Name is : " << laptop.getName() << endl;

    laptop.setStockQuantity(-50); // Invalid, throws exception
  }
  catch (const runtime_error &e)
  {
    cerr << "Error setting stock: " << e.what() << endl;
  }

  try
  {
    laptop.setStockQuantity(1000); // Invalid, throws exception
  }
  catch (const runtime_error &e)
  {
    cerr << "Error setting stock: " << e.what() << endl;
  }

  return 0;
}