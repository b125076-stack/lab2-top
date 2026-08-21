#include <iostream>
using namespace std;

class VehicleService
{
private:
    string vehicleNumber;
    string ownerName;
    string serviceStatus;
    int lastServiceKilometres;

public:
    VehicleService(string number, string owner, int km)
    {
        vehicleNumber = number;
        ownerName = owner;
        serviceStatus = "Pending";
        lastServiceKilometres = km;
    }

    friend class ServiceManager;
};

class ServiceManager
{
public:
    void displayInformation(VehicleService &v)
    {
        cout << "Vehicle Number: " << v.vehicleNumber << endl;
        cout << "Owner Name: " << v.ownerName << endl;
        cout << "Service Status: " << v.serviceStatus << endl;
        cout << "Last Service Kilometres: "
             << v.lastServiceKilometres << " km" << endl;
    }

    void markServiceCompleted(VehicleService &v)
    {
        v.serviceStatus = "Completed";
        cout << "Service marked as completed." << endl;
    }

    void updateServiceKilometres(VehicleService &v, int km)
    {
        v.lastServiceKilometres = km;
        cout << "Service kilometres updated." << endl;
    }

    void checkServiceRequired(VehicleService &v, int currentKm)
    {
        if (v.serviceStatus == "Pending" &&
            currentKm - v.lastServiceKilometres >= 5000)
        {
            cout << "Service is REQUIRED." << endl;
        }
        else
        {
            cout << "Service is NOT required." << endl;
        }
    }
};

int main()
{
    VehicleService v("MH12AB1234", "Nishant", 10000);
    ServiceManager manager;

    manager.displayInformation(v);

    manager.checkServiceRequired(v, 16000);

    manager.markServiceCompleted(v);

    manager.updateServiceKilometres(v, 16000);

    manager.displayInformation(v);

    return 0;
}