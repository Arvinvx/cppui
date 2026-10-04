#include <iostream>
using namespace std;

int main() {
  int x;
  int y;

  cout << "Enter the first number: ";
  cin >> x; 

  cout << "Enter the second number: ";
  cin >> y;

  int* newx = &x;
  int* newy = &y;

  cout << "The sum of the two numbers is: " << *newx + *newy << endl;

  cout << x << endl;
  cout << newx << endl;

  cout << y << endl;
  cout << newy << endl;

  
  return 0;
}
