#include <iostream>
using namespace std;

// Define name_x_times() below:
void name_x_times(string name, int x) {
  while (x > 0) {
    cout << name;
    x--;
  }
}

int main() {
  
  std::string my_name = "Lord Voldemort!";
  int some_number = 5; // Change this if you like!
  // Call name_x_times() below with my_name and some_number
  name_x_times(my_name, some_number);
  
}