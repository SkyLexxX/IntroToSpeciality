#pragma once
#include <iostream>
#include <string>

using namespace std;

class Elevator
{
private:
	string name;
	double loadCapacity;
	double motorPower;
protected:
	double height;
	double witdth;
public:
	double speed;
	double test;

	Elevator() {}

	Elevator(string Name, double Speed, double Test);
	void get_speed();
	void get_test();

	Elevator(string Name, double LoadCapacity, double MotorPower, double Height, double Witdth);
	void get_name();
	void get_loadCapacity();
	void get_MotorPower();
	void get_height();
	void get_witdth();
};

