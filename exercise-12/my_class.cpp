#include "your_class.hpp"

// add constructor
Person::Person(std::string new_month, std::string new_birthstone)
  : month(new_month), birthstone(new_birthstone) {}

std::string Person::get_month() {
  
  return month;
  
}

std::string Person::get_birthstone() {
  
  return birthstone;
  
}


