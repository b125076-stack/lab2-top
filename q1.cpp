#include<iostream>
using namespace std;

class Weather
{
private:
    string cityName;
    float temperature;
    string weatherCondition;

public:
    Weather(string city, float temp, string condition)
    {
        cityName = city;
        temperature = temp;
        weatherCondition = condition;
    }

    friend void generateReport(Weather w);
};

void generateReport(Weather w)
{
    cout << "City: " << w.cityName << endl;
    cout << "Temperature: " << w.temperature << " C" << endl;
    cout << "Weather Condition: " << w.weatherCondition << endl;

    if (w.temperature > 35)
        cout << "Classification: Very Hot" << endl;
    else if (w.temperature >= 20)
        cout << "Classification: Pleasant" << endl;
    else
        cout << "Classification: Cool" << endl;
}

int main()
{
    Weather w("udaipur", 29, "Sunny");

    generateReport(w);

    return 0;
}