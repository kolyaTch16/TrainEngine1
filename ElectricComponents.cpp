#include "ElectricComponents.h"
#include <iostream>

ElectricComponent::ElectricComponent() {

}
void ElectricComponent::Update() {
	std::cout << "asd";
}
void ElectricComponent::MakeFailure() {

}
Diode::Diode() {
	Wires = new Wire[2];
	I = &Wires[0];
	O = &Wires[1];
}
void Diode::Update() {
	if (I->status == WIRE_STATUS::ON_VOLTAGE && O->status == WIRE_STATUS::GROUND) {
		O->status = WIRE_STATUS::ON_VOLTAGE;
	}
	if (I->status == WIRE_STATUS::ON_VOLTAGE && O->status == WIRE_STATUS::GROUND) {
		O->status = WIRE_STATUS::ON_VOLTAGE;
	}	
}
void Diode::MakeFailure() {

}