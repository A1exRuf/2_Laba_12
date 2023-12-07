#pragma once

#include "Storage.h"

class Flash : public Storage
{
private:
	string shellType;
	string shellColor;
	bool protection;
public:
	Flash();
	Flash(string manufacturer, int storageSize, int readSpeed, int writeSpeed, string shellType, string shellColor, bool protection);
	~Flash();

	void setShellType(string shellType);
	string getShellType();

	void setShellColor(string shellColor);
	string getShellColor();

	void setProtection(bool protection);
	bool getProtection();

	void inputInfo() override;
	void outputInfo() override;
	void ejectDevice() override;
};