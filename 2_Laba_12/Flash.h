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
	Flash(string shellType, string shellColor, bool protection);
	~Flash();

	void setShellType(string shellType);
	string getShellType();

	void setShellColor(string shellColor);
	string getShellColor();

	void setProtection(bool protection);
	bool getProtection();
};

