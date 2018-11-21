#pragma once
#include <iostream>
#include <string>

using namespace std;

class Elevator
{
private:
	string elevatorName;
	double loadCapacity;
	double motorPower;
protected:
	double elevatorHeight;
	double elevatorWitdth;
public:
	double elevatorSpeed;
	double testVariable;

	Elevator() {}

	Elevator(string Name, double Speed, double TestVariable);
	void getElevatorSpeed();
	void getTestVariable();

	Elevator(string Name, double LoadCapacity, double MotorPower, double Height, double Witdth);
	void getElevatorName();
	void getLoadCapacity();
	void getMotorPower();
	void getElevatorHeight();
	void getElevatorWitdth();
};

