#include <iostream>
#include <cstring>
#include "num_ops.hpp"

using namespace std;

// define function
string makeBubbleTea(bool milk, bool sugar, bool boba) {
    string bubbleTea = "Here's your bubble tea ";
    if (milk and sugar and boba) {
        bubbleTea += "with milk, sugar and boba!\n";
    } else if (milk and sugar) {
        bubbleTea += "with milk and sugar.\n";
    } else if (boba) {
        bubbleTea += "with the real thing.\n";
    } else {
        bubbleTea += "with nothing.\n";
    }
    return bubbleTea += "\n";
}