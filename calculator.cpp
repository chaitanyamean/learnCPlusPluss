#include <iostream>

using namespace std;


double add(double num1, double num2) {
        return num1 + num2;
}


double subtract(double num1, double num2) {
        return num1 - num2;
}


double multiply(double num1, double num2) {
        return num1 * num2;
}


double divide(double num1, double num2) {
        return num1 / num2;
}


double test(double number1, char operate, double number2) {
  double result;
  // Write your code here
  switch(operate) {
      case '+':
      result = add(number1, number2);
       break;

       case '-':
      result = subtract(number1, number2);
       break;

       case '*':
      result = multiply(number1, number2);
       break;

       case '/':
      result = divide(number1, number2);
       break;

      default:
      result = -1;
  }
  return result;
}