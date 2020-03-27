#include <iostream>
#include <cmath>

int main() {
  
  double height, weight, bmi;
  int exponent = 2;
  
  // Ask user for their height
  
  std::cout << "Type in your height (m): ";
  std::cin >> height;
  
  // Now ask the user for their weight and calculate BMI
  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;
  
  bmi = weight/pow(weight, exponent);
  
  // Display bmi result
  std::cout << "Your BMI is: " << bmi;

  return 0;

}