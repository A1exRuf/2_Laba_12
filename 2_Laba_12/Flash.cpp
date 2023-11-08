#include "Flash.h"

Flash::Flash() : Storage()
{
    this->shellType = "unknown";
    this->shellColor = "unknown";
    this->protection = false;
}

Flash::Flash(string shellType, string shellColor, bool protection)
{
    this->shellType = shellType;
    this->shellColor = shellColor;
    this->protection = protection;
}

Flash::~Flash()
{
}

void Flash::setShellType(string shellType)
{
    this->shellType = shellType;
}

string Flash::getShellType()
{
    return this->shellType = shellType;
}

void Flash::setShellColor(string shellColor)
{
    this->shellColor = shellColor;
}

string Flash::getShellColor()
{
    return this->shellColor;
}

void Flash::setProtection(bool protection)
{
    this->protection = protection;
}

bool Flash::getProtection()
{
    return this->protection;
}
