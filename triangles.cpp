#include "triangles.h"

triangle::triangle(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;

    if(typeid(a) != typeid(int) || typeid(b) != typeid(int) ||typeid(c) != typeid(int)) {
        throw std::invalid_argument("Ausnahme: Ungueltige Eingabe! Bitte geben Sie ganze Zahlen ein.");
    }
    else if(a < 1 || b < 1 || c < 1) {
        throw std::invalid_argument("Ausnahme: Kantenlaenge darf nicht Null sein!");
    }
    else if(a + b == c || b + c == a || a + c == b) {
        throw std::invalid_argument("Ausnahme: Summe der kuerzeren Seiten ist gleich 3. Seitenlaenge.");
    }
    else if(a + b <= c || b + c <= a || a + c <= b) {
        throw std::invalid_argument("Ausnahme: Summe der kuerzeren Seiten ist kleiner 3. Seitenlaenge.");
    }
    else if(a == b && b == c) {
        std::cout << "Gleichseitig." << "\n";
    }
    else if(a == b || b == c || a == c) {
        std::cout << "Gleichschenklig." << "\n";
    }
    else {
        std::cout << "Ungleichseitig." << "\n";
    }
}
