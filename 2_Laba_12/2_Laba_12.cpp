#include "List.h"

int main()
{
    /*HDD hdd("Western Digital", 2048, 256, 224, 7200, "USB 3.0");

    hdd.outputInfo();

    hdd.ejectDevice();

    Flash flash("Kingstone", 512, 1024, 840, "plastic", "black", true);

    flash.outputInfo();

    flash.ejectDevice();

    HDD hdd2;

    hdd2.inputInfo();
    hdd2.outputInfo();

    Flash flash2;

    flash2.inputInfo();
    flash2.outputInfo();*/

    List l;

    while (true)
    {
        cout << "1. Add flash" << endl;
        cout << "2. Add HDD" << endl;
        cout << "3. Print info" << endl;
        cout << "4. Exit" << endl;
        int choice;
        cin >> choice;

        Storage* storage = nullptr;

        switch (choice)
        {
        case 1:
        {
            storage = new Flash();
            break;
        }

        case 2:
        {
            storage = new HDD();
            break;
        }

        case 3:
        {
            cout << "1. Print flash info" << endl;
            cout << "2. Print HDD info" << endl;
            int displayChoice;
            cin >> displayChoice;

            switch (displayChoice)
            {
            case 1:
            {
                l.printFlash();
                break;
            }

            case 2:
            {
                l.printHDD();
                break;
            }

            default:
            {
                cout << "Wrong choice" << endl;
                break;
            }
            }
            break;
        }

        case 4:
        {
            l.clear();
            return 0;
        }

        default:
        {
            cout << "Wrong choice" << endl;
            break;
        }
        }

        if (storage != nullptr)
        {
            storage->inputInfo();
            l.addStorage(storage);
        }
    }
    return 0;
}