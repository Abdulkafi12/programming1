//demonstrating chapter two topics

#include <iostream>
using namespace std;

// This is a comment

int main() {
    // Variable declaration and initialization
    int num1;   //Variable declaration
    int num2 = 5;     //Variable initialization
    char letter = 'H';    //character data taype
    const float PI = 3.14159;     //constant variable

    // Input statement
    cout << "Enter a number: ";
    cin >> num1;      //the input statement 

    // Output statement
    cout << "The value of num1 is: " << num1 << endl;

    // Arithmetic operators
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = (float)num1 / num2;
    int remainder = num1 % num2;

    // Relational operators
    bool isEqual = (num1 == num2);
    bool isNotEqual = (num1 != num2);
    bool isGreaterThan = (num1 > num2);
    bool isLessThan = (num1 < num2);
    bool isGreaterOrEqual = (num1 >= num2);
    bool isLessOrEqual = (num1 <= num2);

    // Logical operators
    bool isTrue = true;
    bool isFalse = false;
    bool andResult = (isTrue && isFalse);
    bool orResult = (isTrue || isFalse);
    bool notResult = !isTrue;

    // Bitwise operators
    int bitwiseAnd = num1 & num2;
    int bitwiseOr = num1 | num2;
    int bitwiseXor = num1 ^ num2;
    int bitwiseNot = ~num1;
    int leftShift = num1 << 1;
    int rightShift = num1 >> 1;

    // Increment and decrement operators
    int count = 0;
    count++;
    count--;
    int postIncrement = count++;
    int preIncrement = ++count;
    int postDecrement = count--;
    int preDecrement = --count;

    // Precedence
    int result = num1 + num2 * 2;
    int result2 = (num1 + num2) * 2;

    // Explicit type casting
    int intNum = 10;
    float floatNum = 3.14;
    intNum = (int)floatNum;

    // Implicit type casting
    intNum = num1 + letter;

    return 0;
}