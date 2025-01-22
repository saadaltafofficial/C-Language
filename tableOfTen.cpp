#include <iostream>
using namespace std;
int main() {
  int number, maxMultiplier;

  cout << "Please enter a number you need table of: ";
  cin >> number;
  cout << "Please enter the maximum multiplier: ";
  cin >> maxMultiplier;
  
  for(int counter = 1; counter<= maxMultiplier; counter++){
    cout << number << "x"<< number <<"="<< number*counter << endl;
  }
}
