#include <iostream>
using namespace std;

int square(int);
double raiseToPower(double, int);

int main() {
  int number, result, power;

  cout << "Please enter number you need square of: ";
  cin >> number;

  result = square(number);
  cout << "Squared number is: " << result << endl;

  cout << "Please enter a number you need to raise to a power: " << endl;
  cin >> number;

  cout << "Please enter the power you want to raise to: " << endl;
  cin >> power;
  result = raiseToPower(number, power);

  cout << "The result is: " << result;

}

int square(int n){
  return n*n;
}

double raiseToPower(double x, int power){
  double result;
  int i;
  result = 1;

  for(i = 1; i <= power; i++){
    result *= x;
  }
  return result;
}
