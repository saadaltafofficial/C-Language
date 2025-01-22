#include <iostream>
using namespace std;
int main() {
  int factorial, number;
  factorial = 1;
  number = 1;

  cout << "Please enter a number you need factorial of: ";
  cin >> number;
  
  while(number > 1){
    factorial = factorial * number;
    number = number - 1;
  }

  cout << "Therefore the factorial of number is " << factorial << endl;
}
