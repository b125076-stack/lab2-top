#include <iostream>
#include <string>
using namespace std;

class Ticket {
protected:
    string passengerName;
    double distanceKm;

public:
    Ticket(string name, double distance)
        : passengerName(name), distanceKm(distance) {}
};

class RailwayTicket : public Ticket {
private:
    double farePerKm;

public:
    RailwayTicket(string name, double distance, double rate)
        : Ticket(name, distance), farePerKm(rate) {}

    void displayTicket() const {
        double fare = distanceKm * farePerKm;

        if (distanceKm > 300)
            fare = fare - (fare*0.10);

        cout << "Passenger: " << passengerName << '\n';
        cout << "Distance: " << distanceKm << " km\n";
        cout << "Final fare: Rs. " << fare << '\n';
    }
};

int main() {
    RailwayTicket ticket("nishant", 3500, 20);
    ticket.displayTicket();

    return 0;
}