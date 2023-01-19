#include <iostream>
#include "ElectricBicycle.h"
int main() {
	setlocale(LC_ALL, "Russian");
	ElectricBicycle byke("Suzuki", "white");
	byke.printBicycleInfo();
	byke.printFuelInfo();
	return 0;
}