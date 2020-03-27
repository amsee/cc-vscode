#include <iostream>
#include "num_ops.hpp"

using namespace std;

int main() {

    // call functions
    cout << makeBubbleTea();
    cout << makeBubbleTea(false, false, false);
    cout << makeBubbleTea(true, false, true);
}