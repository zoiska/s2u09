#ifndef $PARKPLATZEXCEPTION_H
#define $PARKPLATZEXCEPTION_H

#include <stdexcept>

class ParkplatzException : std::runtime_error{
public:
    ParkplatzException(const std::string &errorMsg);
};

class ParkplatzIstVollException : ParkplatzException {
public:
    ParkplatzIstVollException(int kfz);
};

class ParkplatzIstLeerException : ParkplatzException {
public:
    ParkplatzIstLeerException(int kfz);
};

#endif //$PARKPLATZEXCEPTION_H
