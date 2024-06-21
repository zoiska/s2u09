#ifndef $PARKPLATZ_H
#define $PARKPLATZ_H

#include "ParkplatzException.h"

class Parkplatz{
public:
    Parkplatz();
    void ankommen();
    void abfahren();
private:
    int kfz;
};

#endif //$PARKPLATZ_H
