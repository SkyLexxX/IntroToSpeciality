#include "Elevator.h"

int main()
{

	Elevator ElevatorObject("NAME", 440, 7, 110, 210);
	ElevatorObject.getElevatorName();
	ElevatorObject.getLoadCapacity();
	ElevatorObject.getMotorPower();
	ElevatorObject.getElevatorHeight();
	ElevatorObject.getElevatorWitdth();

	Elevator ElevatorObject1("NONAME", 430, 8, 120, 220);
	ElevatorObject1.getElevatorName();
	ElevatorObject1.getLoadCapacity();
	ElevatorObject1.getMotorPower();
	ElevatorObject1.getElevatorHeight();
	ElevatorObject1.getElevatorWitdth();

	Elevator ElevatorObject2("EMNA", 420, 9, 130, 330);
	ElevatorObject2.getElevatorName();
	ElevatorObject2.getLoadCapacity();
	ElevatorObject2.getMotorPower();
	ElevatorObject2.getElevatorHeight();
	ElevatorObject2.getElevatorWitdth();

	Elevator ElevatorObject3("KYKY", 24, 9);
	ElevatorObject3.getElevatorName();
	ElevatorObject3.getElevatorSpeed();
	ElevatorObject3.getTestVariable();

	system("pause");
	return 0;
}