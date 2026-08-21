#include <iostream>
using namespace std;

class Printer
{
private:
    string printerName;
    int pagesPrinted;
    int inkLevel;
    bool powerStatus;

public:
    Printer(string name)
    {
        printerName = name;
        pagesPrinted = 0;
        inkLevel = 100;
        powerStatus = false;
    }

    friend class PrinterManager;
};

class PrinterManager
{
public:

    void displayPrinterInfo(Printer &p)
    {
        cout << "Printer Name: " << p.printerName << endl;
        cout << "Pages Printed: " << p.pagesPrinted << endl;
        cout << "Ink Level: " << p.inkLevel << "%" << endl;

        if (p.powerStatus)
            cout << "Power Status: ON" << endl;
        else
            cout << "Power Status: OFF" << endl;
    }

    void turnOn(Printer &p)
    {
        p.powerStatus = true;
        cout << "Printer turned ON." << endl;
    }

    void turnOff(Printer &p)
    {
        p.powerStatus = false;
        cout << "Printer turned OFF." << endl;
    }

    void checkInkLevel(Printer &p)
    {
        cout << "Ink Level: " << p.inkLevel << "%" << endl;
    }

    void resetPageCount(Printer &p)
    {
        p.pagesPrinted = 0;
        cout << "Page count reset successfully." << endl;
    }
};

int main()
{
    Printer p("HP LaserJet");
    PrinterManager manager;

    manager.displayPrinterInfo(p);

    manager.turnOn(p);

    manager.checkInkLevel(p);

    manager.resetPageCount(p);

    manager.turnOff(p);

    return 0;
}