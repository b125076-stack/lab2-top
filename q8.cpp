#include <iostream>
using namespace std;

class TrafficSignal {
public:
    virtual int getGreenDuration(int vehicleCount) = 0;
    virtual ~TrafficSignal() {}
};

class UrbanSignal : public TrafficSignal {
public:
    int getGreenDuration(int vehicleCount) override {
        int duration = 10 + 2 * vehicleCount;
        return (duration > 60) ? 60 : duration;
    }
};

class HighwaySignal : public TrafficSignal {
public:
    int getGreenDuration(int vehicleCount) override {
        int duration = 15 + 3 * vehicleCount;
        return (duration > 90) ? 90 : duration;
    }
};

int main() {
    int urbanVehicles, highwayVehicles;

    cout << "Enter vehicle count for urban signal: ";
    cin >> urbanVehicles;

    cout << "Enter vehicle count for highway signal: ";
    cin >> highwayVehicles;

    UrbanSignal urban;
    HighwaySignal highway;

    TrafficSignal* signal = &urban;
    cout << "Urban green duration: "
         << signal->getGreenDuration(urbanVehicles) << " seconds\n";

    signal = &highway;
    cout << "Highway green duration: "
         << signal->getGreenDuration(highwayVehicles) << " seconds\n";

    return 0;
}