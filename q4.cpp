#include <iostream>
using namespace std;

class HotelRoom
{
private:
    int roomNo, days;
    string guestName;
    float costPerDay, totalRent;

public:
    void input()
    {
        cout << "Enter Room Number: ";
        cin >> roomNo;
        cout << "Enter Guest Name: ";
        cin >> guestName;
        cout << "Enter Number of Days: ";
        cin >> days;
        cout << "Enter Cost Per Day: ";
        cin >> costPerDay;
    }

    void calculate()
    {
        totalRent = days * costPerDay;
    }

    void display()
    {
        cout << "\nBooking Details\n";
        cout << "Room Number : " << roomNo << endl;
        cout << "Guest Name : " << guestName << endl;
        cout << "Days Stayed : " << days << endl;
        cout << "Cost Per Day : " << costPerDay << endl;
        cout << "Total Rent : " << totalRent << endl;
    }
};

int main()
{
    HotelRoom h;
    h.input();
    h.calculate();
    h.display();
    return 0;
}