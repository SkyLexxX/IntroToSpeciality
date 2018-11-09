#include "Elevator.h"

Elevator::Elevator(string Name, double LoadCapacity, double MotorPower, double Height, double Witdth)
{
	name = Name;
	loadCapacity = LoadCapacity;
	motorPower = MotorPower;
	height = Height;
	witdth = Witdth;
}

Elevator::Elevator(string Name, double Speed, double Test)
{
	name = Name;
	speed = Speed;
	test = Test;
}

void Elevator::get_name() 
{
	cout << "Name: " << name << endl;
}
void Elevator::get_loadCapacity()
{
	cout << "Load Capacity: " << loadCapacity << endl;
}
void Elevator::get_MotorPower()
{
	cout << "MotorPower: " << motorPower << endl;
}
void Elevator::get_height()
{
	cout << "Height: " << height << endl;
}
void Elevator::get_witdth()
{
	cout << "Witdth :" << witdth << "\n" << endl;
}
void Elevator::get_speed()
{
	cout << "Speed: " << speed << endl;
}
void Elevator::get_test()
{
	cout << "Test: " << test << endl;
}