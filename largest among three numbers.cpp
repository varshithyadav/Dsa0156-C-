#include <iostream>

using namespace std;

int main() {
  int a, b, c, largest;

  cout << "Enter three numbers: ";
  cin >> a >> b >> c;

  // Nested ternary operator to find the largest
  largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

  cout << "The largest number is: " << largest << endl;

  return 0;
}
