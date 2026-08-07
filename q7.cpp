#include <iostream>
using namespace std;

class MovieTicket
{
private:
    string movieName;
    float ticketPrice, totalCost;
    int tickets;

public:
    void input()
    {
        cout << "Enter Movie Name: ";
        cin >> movieName;
        cout << "Enter Ticket Price: ";
        cin >> ticketPrice;
        cout << "Enter Number of Tickets: ";
        cin >> tickets;
    }

    void calculate()
    {
        totalCost = ticketPrice * tickets;
    }

    void display()
    {
        cout << "\nMovie Name : " << movieName;
        cout << "\nTotal Cost : " << totalCost;
    }
};

int main()
{
    MovieTicket m;
    m.input();
    m.calculate();
    m.display();
    return 0;
}