#include "HDD.h"

HDD::HDD() : Storage()
{
	this->rpm = 0;
	this->interface = "unknown";
}

HDD::HDD(int rpm, string interface)
{
	this->rpm = rpm;
	this->interface = interface; 
}

HDD::~HDD()
{
}

void HDD::setRpm(int rpm)
{
	this->rpm = rpm;
}

int HDD::getRpm()
{
	return this->rpm;
}

void HDD::setInterface(string interface)
{
	this->interface = interface;
}

string HDD::getInterface()
{
	return this->interface;
}
