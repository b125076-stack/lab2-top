#include<iostream>
using namespace std;

class Exhibit
{
private:
    string exhibitName;
    int exhibitID;
    int visitorCount;
    bool displayStatus;

public:
    Exhibit(string name, int id)
    {
        exhibitName = name;
        exhibitID = id;
        visitorCount = 0;
        displayStatus = false;
    }

    friend class MuseumManager;
};

class MuseumManager
{
public:
    void displayInformation(Exhibit &e)
    {
        cout << "Exhibit Name: " << e.exhibitName << endl;
        cout << "Exhibit ID: " << e.exhibitID << endl;
        cout << "Visitor Count: " << e.visitorCount << endl;

        if (e.displayStatus)
            cout << "Display Status: Open" << endl;
        else
            cout << "Display Status: Closed" << endl;
    }

    void addVisitor(Exhibit &e)
    {
        e.visitorCount++;
        cout << "Visitor added." << endl;
    }

    void resetVisitorCount(Exhibit &e)
    {
        e.visitorCount = 0;
        cout << "Visitor count reset." << endl;
    }

    void openCloseExhibit(Exhibit &e)
    {
        e.displayStatus = !e.displayStatus;

        if (e.displayStatus)
            cout << "Exhibit Opened." << endl;
        else
            cout << "Exhibit Closed." << endl;
    }

    void checkStatus(Exhibit &e)
    {
        if (e.displayStatus)
            cout << "Exhibit is currently OPEN." << endl;
        else
            cout << "Exhibit is currently CLOSED." << endl;
    }
};

int main()
{
    Exhibit e("Dinosaur Fossil", 101);
    MuseumManager m;

    m.openCloseExhibit(e);
    m.addVisitor(e);
    m.addVisitor(e);

    m.displayInformation(e);
    m.checkStatus(e);

    m.resetVisitorCount(e);

    return 0;
}