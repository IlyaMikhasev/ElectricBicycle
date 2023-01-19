#include "Vehicle.h"

 void Vehicle<ElectroFuel>::printFuelInfo() {
	std::cout << _fuel.info() << '\n';
}

ElectroFuel::ElectroFuel():_fuel("electric fuel") {}
const std::string& ElectroFuel::info() const {
	return _fuel;
}

