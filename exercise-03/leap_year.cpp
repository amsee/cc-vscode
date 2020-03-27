#include <iostream>

int main() {
  
  int year = 0;
  
  // takes a year as input
  std::cout << "Enter a year: ";
  std::cin >> year;
  
  // check to see if year is a four-digit number
  if (year < 1000 || year > 9999) {
    
    std::cout << "Invalid entry.\n";
    
  // check if the year entered is evenly divisible
  } else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    
    std::cout << year;
    std::cout << " falls on a leap year.\n";
    
  // 
  } else {
    std::cout << year;
    std::cout << " is not a leap year.\n";
  }
  
}


// proper algorithm 

#include <iostream>
 
bool is_leap_year(int year) {
  return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}
 
int main() {
  for (auto year : {1900, 1994, 1996, 1997, 2000}) {
    std::cout << year << (is_leap_year(year) ? " is" : " is not") << " a leap year.\n";
  }
}

/*

OUTPUT

1900 is not a leap year.
1994 is not a leap year.
1996 is a leap year.
1997 is not a leap year.
2000 is a leap year.

*/