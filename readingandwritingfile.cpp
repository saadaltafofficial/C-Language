#include <iostream>
#include <fstream>

using namespace std;

int main() {
  string str;
  // Random writing in file
  fstream myFile;
  myFile.open ("test.txt", ios::out);
  myFile.write("It is a test file.", 18);
  long position = myFile.tellp();
  cout << "Current position is " << position << endl;
  myFile.seekp(position - 5, ios::beg);
  myFile.write("Jumped back 5 bytes.", 20);
  myFile.close();

  // Random reading from file
  myFile.open("test.txt", ios::in);
  myFile.seekg(8, ios::beg);
  position = myFile.tellg();
  cout << "Current position is " << position << endl;
  getline(myFile, str);
  cout << "\n\n str: " << str << endl;
}
