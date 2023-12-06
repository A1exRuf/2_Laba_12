#include "HDD.h"
#include "Flash.h"

int main()
{
    HDD hdd("Western Digital", 2048, 256, 224, 7200, "USB 3.0");

    hdd.outputInfo();

    Flash flash("Kingstone", 512, 1024, 840, "plastic", "black", true);

    flash.outputInfo();

    HDD hdd2;

    hdd2.inputInfo();
    hdd2.outputInfo();

    Flash flash2;

    flash2.inputInfo();
    flash2.outputInfo();
}