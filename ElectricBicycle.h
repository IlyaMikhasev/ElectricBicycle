#pragma once
#include "Vehicle.h"

class ElectricBicycle :public Vehicle<ElectroFuel>{
public:
	ElectricBicycle(std::string name, std::string color);
	void printBicycleInfo();
private:
	std::string _name;
	std::string _color;
};

