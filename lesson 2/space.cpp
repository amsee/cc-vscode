#include <iostream>
using namespace std;

int main() {
 
  double earthWeight;
  int planetNumber;
  double planetWeight;
  string planetName;
  
  std::cout << "Please enter your weight on Earth: ";
  std::cin >> earthWeight;
  
  std::cout << "Please select a planet from the following list:\n\n";
  
  std::cout << "   1: Venus\n";
  std::cout << "   2: Mars\n";
  std::cout << "   3: Jupiter\n";
  std::cout << "   4: Saturn\n";
  std::cout << "   5: Uranus\n";
  std::cout << "   6: Neptune\n\n";
  
  std::cout << "Planet Number: "; 
  std::cin >> planetNumber;  
  
  switch (planetNumber){
    case 1 :
      planetWeight = earthWeight * 0.78;
      planetName = "Venus";
      break;
    case 2 :
      planetWeight = earthWeight * 0.39;
      planetName = "Mars";
      break;
    case 3 :
      planetWeight = earthWeight * 2.65;
      planetName = "Jupiter";
      break;
    case 4 :
      planetWeight = earthWeight * 1.17;
      planetName = "Saturn";
      break;
    case 5 :
      planetWeight = earthWeight * 1.05;
      planetName = "Uranus";
      break;
    case 6 :
      planetWeight = earthWeight * 1.23;
      planetName = "Neptune";
      break;
    default :
      planetName = "Unknown";
      break;
  }
  
  if (planetName == "Unknown"){
    std::cout << "Invalid planet input.\n";
  } else {
    std::cout << "Your weight on " << planetName << " would be " << planetWeight << "\n";
  }
  
}