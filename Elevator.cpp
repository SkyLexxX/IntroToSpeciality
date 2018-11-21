#include "Elevator.h"



Elevator::Elevator(string Name, double LoadCapacity, double MotorPower, double Height, double Witdth)
{
	elevatorName = Name;
	loadCapacity = LoadCapacity;
	motorPower = MotorPower;
	elevatorHeight = Height;
	elevatorWitdth = Witdth;
}

Elevator::Elevator(string Name, double Speed, double TestVariable)
{
	elevatorName = Name;
	elevatorSpeed = Speed;
	testVariable = TestVariable;
}

void Elevator::getElevatorName()
{
	cout << "Name: " << elevatorName << endl;
}
void Elevator::getLoadCapacity()
{
	cout << "Load Capacity: " << loadCapacity << endl;
}
void Elevator::getMotorPower()
{
	cout << "MotorPower: " << motorPower << endl;
}
void Elevator::getElevatorHeight()
{
	cout << "Height: " << elevatorHeight << endl;
}
void Elevator::getElevatorWitdth()
{
	cout << "Witdth :" << elevatorWitdth << "\n" << endl;
}
void Elevator::getElevatorSpeed()
{
	cout << "Speed: " << elevatorSpeed << endl;
}
void Elevator::getTestVariable()
{
	cout << "Test: " << testVariable << endl;
}