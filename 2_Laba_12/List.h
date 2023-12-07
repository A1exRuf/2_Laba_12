#include "Flash.h"
#include "HDD.h"
#include <vector>

#pragma once

class List
{
private:
	vector<Storage*> storages;
public:
    void addStorage(Storage* storage);
    void printFlash();
    void printHDD();
    void clear();
};

