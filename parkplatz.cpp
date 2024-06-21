#include "parkplatz.h"

Parkplatz::Parkplatz() {
    this->kfz = 0;
}

void Parkplatz::ankommen() {
    if(kfz >= 50) {
        throw ParkplatzIstVollException(kfz);
    }
    else {
        kfz++;
    }
}

void Parkplatz::abfahren() {
    if(kfz == 0) {
        throw ParkplatzIstLeerException(kfz);
    }
    else {
        kfz--;
    }
}
