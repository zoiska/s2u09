#include <iostream>
#include "triangles.h"
#include "parkplatz.h"

double root(int num) {
    if(num <= 0) {
        throw "Ausnahme: Ungueltiger Radikand";
    }
    return num ^ (1/2);
}

int main() {
    // Aufg 1
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
    // Aufg 2
    int a, b, c;

    try {
        std::cout << "Seitenlaengen Eingeben:" << "\n";
        std::cin >> a >> b >> c;
        triangle(a, b, c);
    }
    catch (const std::invalid_argument &e) {
        std::cout << e.what() << "\n";
        std::cout << "Bitte versuchen Sie es erneut.";
    }

    //------------------------------------------------------------------------------------------------------------------
    // Aufg 3
    try {
        Parkplatz parkplatz;
        for ( int i = 0; i < 52; ++i) {
            parkplatz.ankommen();
            std::cout << "test" << "\n";
        }
    }
    catch (const std::runtime_error &error) {
        std::cout << error.what() <<"\n";
    }
    return 0;
}