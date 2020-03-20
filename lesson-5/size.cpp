#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // add more items
  grocery.push_back("Toilet Paper");
  grocery.push_back("Mask");
  grocery.push_back("Hand Sanitizer");
  
  // print size of grocery
  std::cout << grocery.size();

}

/*
OUTPUT

6
*/