#include "ParkplatzException.h"

ParkplatzException::ParkplatzException(const std::string &errorMsg) : std::runtime_error(errorMsg) {}

ParkplatzIstVollException::ParkplatzIstVollException(int kfz) : ParkplatzException("Parkplatz ist voll.") {}

ParkplatzIstLeerException::ParkplatzIstLeerException(int kfz) : ParkplatzException("Parkplatz ist leer.") {}
