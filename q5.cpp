#include <iostream>
using namespace std;

class Sensor {
protected:
    int sensorId;

public:
    Sensor(int id) : sensorId(id) {}
};

class Temperature : virtual public Sensor {
protected:
    double temperatureCelsius;

public:
    Temperature(int id, double temperature)
        : Sensor(id), temperatureCelsius(temperature) {}
};

class Humidity : virtual public Sensor {
protected:
    double humidityPercentage;

public:
    Humidity(int id, double humidity)
        : Sensor(id), humidityPercentage(humidity) {}
};

class FarmMonitor : public Temperature, public Humidity {
public:
    FarmMonitor(int id, double temperature, double humidity)
        : Sensor(id),
          Temperature(id, temperature),
          Humidity(id, humidity) {}

    void display() const {
        cout << "Sensor ID: " << sensorId << '\n';
        cout << "Temperature: " << temperatureCelsius << " C\n";
        cout << "Humidity: " << humidityPercentage << "%\n";

        if (temperatureCelsius > 35 || humidityPercentage > 80)
            cout << "Warning: Temperature or humidity is too high.\n";
        else
            cout << "Conditions are within safe limits.\n";
    }
};

int main() {
    FarmMonitor monitor(101, 37.5, 72.0);
    monitor.display();

    return 0;
}