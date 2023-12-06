#pragma once

#include "Storage.h"

class HDD : public Storage
{
private:
	int rpm;
	string interface;

public:
	HDD();
	HDD(string manufacturer, int storageSize, int readSpeed, int writeSpeed, int rpm, string interface);
	~HDD();

	void setRpm(int rpm);
	int getRpm();

	void setInterface(string interface);
	string getInterface();
	void inputInfo();
	void outputInfo();
};