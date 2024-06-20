#include <iostream>
#include "triangles.h"

double root(int num) {
    if(num <= 0) {
        throw "Ausnahme: Ungueltiger Radikand";
    }
    return num ^ (1/2);
}

int main() {
    int x = 0;
    double erg;
    try {
        erg = root(x);
        std::cout << erg << "\n";
    }
    catch(const char* msg) {
        std::cerr << msg << std::endl;
    }

    //------------------------------------------------------------------------------------------------------------------

    try {
        std::cout << triangles() << "\n";
    }
    catch (const std::invalid_argument &e) {
        std::cout << e.what() << "\n";
        std::cout << "Bitte versuchen Sie es erneut.";
    }
    return 0;
}