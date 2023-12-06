#include "HDD.h"

HDD::HDD() : Storage()
{
	this->rpm = 0;
	this->interface = "unknown";
}

HDD::HDD(string manufacturer, int storageSize, int readSpeed, int writeSpeed, int rpm, string interface)
	: Storage(manufacturer, storageSize, readSpeed, writeSpeed)
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

void HDD::inputInfo() {
	Storage::inputInfo();
	cout << "Enter RPM: ";
	cin >> rpm;
	cout << "Enter Interface: ";
	cin >> interface;
}

void HDD::outputInfo() {
	Storage::outputInfo();
	cout << "RPM: " << rpm << endl;
	cout << "Interface: " << interface << endl;
}
