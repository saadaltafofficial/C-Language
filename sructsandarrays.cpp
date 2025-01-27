#include <iostream>

using namespace std;

//Structs in C++
struct Student {
    int id;
    float marks;
    string name;
}S[5];

void takeInput(){
  for(int i=0;i<=4;i++){    
    cout << "Enter your id:" << endl;
    cin >> S[i].id;
    cout << "Enter your marks:" << endl;
    cin >> S[i].marks;
    cout << "Enter your name:" << endl;
    cin >> S[i].name;
    }
}

void printOutput() {
  for(int i=0; i<=4; i++){
    cout << "Your id is: " << S[i].id << endl;
    cout << "Your marks are: " << S[i].marks << endl;
    cout << "Your name is: " << S[i].name << endl;  
  }
}
  
int main() {
  takeInput();
  printOutput();
}
