// Calculate the sum of odd integers for a given upperlimit. Also draw flow chart of the program

#include <iostream>
using namespace std;
int main() {
  int sum, number, upperLimit;
  
  sum = 0;
  number = 1;

  cout << "Please enter a number: ";
  cin >> upperLimit;
  if(upperLimit <= 0){
    cout << "The upperLimit should always be greater then 0"<< endl;
  } else {
    while(number <= upperLimit){
      if((number % 2) != 0){
        sum = sum + number;
      }
      
      number = number + 1;
    }
    cout << "Therefore the odd sum of numbers to upperLimit you provide is " << sum << endl;
  }
}
