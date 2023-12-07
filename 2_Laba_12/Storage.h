#pragma once
#include <iostream>

using namespace std;

class Storage
{
protected:
	string manufacturer;
	int storageSize;
	int readSpeed;
	int writeSpeed;
public:
	Storage();
	Storage(string manufacturer, int storageSize, int readSpeed, int writeSpeed);
	~Storage();

	void setManufacturer(string manufacturer);
	string getManufacturer();

	void setStorageSize(int storageSize);
	int getStorageSize();

	void setReadSpeed(int readSpeed);
	int getReadSpeed();

	void setWritedSpeed(int writeSpeed);
	int getWriteSpeed();

	virtual void inputInfo();
	virtual void outputInfo();
	virtual void ejectDevice() = 0;
};