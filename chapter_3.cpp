//Chapter three topics

 #include <iostream>
using namespace std;

int main() {
  int num = 10;

  // One way if statement
  if (num > 5) {
    cout << "Number is greater than 5." << endl;
  }

  // Multi way if else statement
  if (num > 20) {
    cout << "Number is greater than 20." << endl;
  }
  else if (num > 15) {
    cout << "Number is greater than 15 but less than or equal to 20." << endl;
  }
  else {
    cout << "Number is less than or equal to 15." << endl;
  }

  // Nested if statement
  int age = 25;
  bool has_license = true;
  if (age >= 18) {
    if (has_license == true) {
      cout << "You are eligible to drive!" << endl;
    }
    else {
      cout << "Please get a license before driving." << endl;
    }
  }
  else {
    cout << "You are too young to drive." << endl;
  }

  return 0;
}