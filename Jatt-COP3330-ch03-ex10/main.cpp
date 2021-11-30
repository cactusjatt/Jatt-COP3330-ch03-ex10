/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Sarim Jatt
 */
 
 #include <iostream>

int main() {
  char operation;
  double operand1, operand2;

  std::cout << "Input an operator and 2 operands (for example \"+ 5 4\"): ";
  std::cin >> operation >> operand1 >> operand2;

  if(operation == '+')
    std::cout << operand1 << " + " << operand2 << " = " << (operand1+operand2) << std::endl;
  else if(operation == '-')
      std::cout << operand1 << " - " << operand2 << " = " << (operand1-operand2) << std::endl;
    else if(operation == '*')
      std::cout << operand1 << " * " << operand2 << " = " << (operand1*operand2) << std::endl;
    else if(operation == '/')
      std::cout << operand1 << " / " << operand2 << " = " << (operand1/operand2) << std::endl;
    else
      std::cout << "Error";

  return 0;
} 