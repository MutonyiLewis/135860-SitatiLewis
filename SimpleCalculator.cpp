#include <iostream>
#include <string>

using namespace std;

float add(float num1, float num2) {
  return num1 + num2;
}

float subtract(float num1, float num2) {
  return num1 - num2;
}

float multiply(float num1, float num2) {
  return num1 * num2;
}

float divide(float num1, float num2) {
  return num1 / num2;
}

int main() {
  float num1, num2;
  char op;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  cout << "Enter an operator (+, -, *, /): ";
  cin >> op;

  float result;
  switch (op) {
    case '+':
      result = add(num1, num2);
      break;
    case '-':
      result = subtract(num1, num2);
      break;
    case '*':
      result = multiply(num1, num2);
      break;
    case '/':
      result = divide(num1, num2);
      break;
    default:
      cout << "Invalid operator" << endl;
      return 1;
  }

  cout << "The result is: " << result << endl;

  return 0;
}