#include <iostream>
#include <string>

class Person {
  
  std::string month;
  std::string birthstone;
    
public:
  Stone(std::string new_month, std::string new_birthstone);
  
  std::string get_month();
  
  std::string get_birthstone();
  
};