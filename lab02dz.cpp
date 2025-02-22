#include <iostream> // For input and output
#include <string> // For string manipulation

int main() {
  std::string name; // Variable to store the user's name
  std::cout << "Enter your name: "; // Prompt the user for their name
  std::cin >> name; // Read the user's name from standard input
  std::cout << "Hello world from " << name << std::endl; // Print a personalized greeting
  return 0; // Indicate successful execution
}
