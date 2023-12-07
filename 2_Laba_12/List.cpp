#include "List.h"

void List::addStorage(Storage* storage)
{
	storages.push_back(storage);
}

void List::printFlash()
{
    for (Storage* storage : storages)
    {
        if (typeid(*storage) == typeid(Flash))
        {
            storage->outputInfo();
        }
    }
}

void List::printHDD()
{
    for (Storage* storage : storages)
    {
        if (typeid(*storage) == typeid(HDD))
        {
            storage->outputInfo();
        }
    }
}

void List::clear()
{
    for (Storage* storage : storages)
    {
        delete storage;
    }
}
