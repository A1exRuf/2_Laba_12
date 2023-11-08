#pragma once

#include "Storage.h"

class HDD : public Storage
{
private:
	int rpm;
	string interface;

public:
	HDD();
	HDD(int rpm, string interface);
	~HDD();

	void setRpm(int rpm);
	int getRpm();

	void setInterface(string interface);
	string getInterface();
};