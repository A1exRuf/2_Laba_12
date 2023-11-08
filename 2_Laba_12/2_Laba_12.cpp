#include "HDD.h"
#include "Flash.h"

int main()
{
    HDD hdd;
    hdd.setManufacturer("Western Digital");
    hdd.setStorageSize(2048);
    hdd.setReadSpeed(160);
    hdd.setWritedSpeed(120);

    hdd.setRpm(7200);
    hdd.setInterface("USB 3");

    cout << hdd.getManufacturer() << endl;
    cout << hdd.getStorageSize() << endl;
    cout << hdd.getReadSpeed() << endl;
    cout << hdd.getWriteSpeed() << endl;
    cout << hdd.getRpm() << endl;
    cout << hdd.getInterface() << endl;

    Flash flash("SD", "Black", true);

    flash.setManufacturer("Kingstone");
    flash.setStorageSize(512);
    flash.setReadSpeed(2400);
    flash.setWritedSpeed(1800);

    cout << flash.getManufacturer() << endl;
    cout << flash.getStorageSize() << endl;
    cout << flash.getReadSpeed() << endl;
    cout << flash.getWriteSpeed() << endl;
    cout << flash.getShellType() << endl;
    cout << flash.getShellColor() << endl;
    cout << flash.getProtection() << endl;

}