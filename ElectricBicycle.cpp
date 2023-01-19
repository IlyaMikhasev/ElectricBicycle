#include "ElectricBicycle.h"

ElectricBicycle::ElectricBicycle(std::string name, std::string color):_name(name),_color(color){}

void ElectricBicycle::printBicycleInfo(){
	std::cout << "Name: " << _name << "\tcolor: " << _color << '\n';
}
