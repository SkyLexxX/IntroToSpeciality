#include "Elevator.h"

int main()
{

	Elevator ElevatorObject("NAME", 440, 7, 110, 210);
	ElevatorObject.get_name();
	ElevatorObject.get_loadCapacity();
	ElevatorObject.get_MotorPower();
	ElevatorObject.get_height();
	ElevatorObject.get_witdth();

	Elevator ElevatorObject1("NONAME", 430, 8, 120, 220);
	ElevatorObject1.get_name();
	ElevatorObject1.get_loadCapacity();
	ElevatorObject1.get_MotorPower();
	ElevatorObject1.get_height();
	ElevatorObject1.get_witdth();

	Elevator ElevatorObject2("EMNA", 420, 9, 130, 330);
	ElevatorObject2.get_name();
	ElevatorObject2.get_loadCapacity();
	ElevatorObject2.get_MotorPower();
	ElevatorObject2.get_height();
	ElevatorObject2.get_witdth();

	Elevator ElevatorObject3("KYKY", 24, 9);
	ElevatorObject3.get_name();
	ElevatorObject3.get_speed();
	ElevatorObject3.get_test();

	system("pause");
	return 0;
}