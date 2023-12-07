#include "Flash.h"

Flash::Flash() : Storage()
{
    this->shellType = "unknown";
    this->shellColor = "unknown";
    this->protection = false;
}

Flash::Flash(string manufacturer, int storageSize, int readSpeed, int writeSpeed, string shellType, string shellColor, bool protection)
    : Storage(manufacturer, storageSize, readSpeed, writeSpeed)
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

void Flash::inputInfo() {
    Storage::inputInfo();
    cout << "Enter Shell Type: ";
    cin >> shellType;
    cout << "Enter Shell Color: ";
    cin >> shellColor;
    cout << "Enter Protection (1 for Yes, 0 for No): ";
    cin >> protection;
}

void Flash::outputInfo() {
    Storage::outputInfo();
    cout << "Shell Type: " << shellType << endl;
    cout << "Shell Color: " << shellColor << endl;
    cout << "Protection: " << (protection ? "Yes" : "No") << endl;
}

void Flash::ejectDevice()
{
    cout << "You can eject your Flash drive from USB port \n";
}