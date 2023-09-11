/*
Josha Cirbo
9/11/2023
CSC1029 Intro to Secure Coding
Program name: Hello World 2
Description:
  Gets user input and prints 'Hello World user_name' to the console.
*/

#include <iostream>
#include <string>

int main() {
  const std::string MESSAGE = "Hello World ";
  std::string user_name;

  // Get user input. Use getline incase there are spaces in User name
  std::cout << "Enter your name: ";
  getline(std::cin, user_name);

  // Output message to screen
  std::cout << MESSAGE << user_name << std::endl;
  
  return 0;
}