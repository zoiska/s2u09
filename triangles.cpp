#include "triangles.h"

std::string triangles() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(typeid(a) != typeid(int) || typeid(b) != typeid(int) ||typeid(c) != typeid(int)) {
        throw std::invalid_argument("Ausnahme: Ungueltige Eingabe! Bitte geben Sie ganze Zahlen ein.");
    }
    else if(a < 1 || b < 1 || c < 1) {
        throw std::invalid_argument("Ausnahme: Ungueltige Kantenlaenge!");
    }
    else if(a + b == c || b + c == a || a + c == b) {
        throw std::invalid_argument("Ausnahme: Summe der kuerzeren Seitenlaengen == 3. Seitenlaenge.");
    }
    else if(a + b <= c || b + c <= a || a + c <= b) {
        throw std::invalid_argument("Ausnahme: Summe der kuerzeren Seitenlaengen kleiner == 3. Seitenlaenge.");
    }
    else if(a == b && b == c) {
        return "Gleichseitig.";
    }
    else if(a == b || b == c || a == c) {
        return "Gleichschenklig.";
    }
    else {
        return "Ungleichseitig.";
    }
}