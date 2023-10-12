#pragma once
#include <iostream>
enum class WIRE_STATUS { NONE, ON_VOLTAGE, GROUND };


struct Wire {
public:
	WIRE_STATUS status = WIRE_STATUS::NONE;
};
class ElectricComponent {
	
public:
	ElectricComponent();
	virtual void Update();
	virtual void MakeFailure();
	~ElectricComponent(){
		delete[] Wires;
	}

protected:
	Wire* Wires;
};
class Diode :ElectricComponent{
public:
	Wire* I;
	Wire* O;
	Diode();
	void MakeFailure();
	void Update();
};