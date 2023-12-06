#include "Storage.h"

Storage::Storage()
{
    this->manufacturer = "unknown";
    this->storageSize = 0;
    this->readSpeed = 0;
    this->writeSpeed = 0;
}

Storage::Storage(string manufacturer, int storageSize, int readSpeed, int writeSpeed)
{
    this->manufacturer = manufacturer;
    this->storageSize = storageSize;
    this->readSpeed = readSpeed;
    this->writeSpeed = writeSpeed;
}

Storage::~Storage()
{
}

void Storage::setManufacturer(string manufacturer)
{
    this->manufacturer = manufacturer;
}

string Storage::getManufacturer()
{
    return this->manufacturer;
}

void Storage::setStorageSize(int storageSize)
{
    this->storageSize = storageSize;
}

int Storage::getStorageSize()
{
    return this->storageSize;
}

void Storage::setReadSpeed(int readSpeed)
{
    this->readSpeed = readSpeed;
}

int Storage::getReadSpeed()
{
    return this->readSpeed;
}

void Storage::setWritedSpeed(int writeSpeed)
{
    this->writeSpeed = writeSpeed;
}

int Storage::getWriteSpeed()
{
    return this->writeSpeed;
}

void Storage::inputInfo()
{
    cout << "Enter manufacturer: ";
    cin >> manufacturer;
    cout << "Enter storage size: ";
    cin >> storageSize;
    cout << "Enter read speed: ";
    cin >> readSpeed;
    cout << "Enter write speed: ";
    cin >> writeSpeed;
}

void Storage::outputInfo()
{
    cout << "Manufacturer: " << manufacturer;
    cout << "Storage size: " << storageSize;
    cout << "Read speed: " << readSpeed;
    cout << "Write speed: " << writeSpeed;
}