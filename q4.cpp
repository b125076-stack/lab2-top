#include <iostream>
using namespace std;

class ElectricityMeter
{
private:
    int meterNumber;
    string consumerName;
    float unitsConsumed;

public:
    ElectricityMeter(int meter, string name, float units)
    {
        meterNumber = meter;
        consumerName = name;
        unitsConsumed = units;
    }

    friend void checkUsage(ElectricityMeter e);
};

void checkUsage(ElectricityMeter e)
{
    cout << "Meter Number: " << e.meterNumber << endl;
    cout << "Consumer Name: " << e.consumerName << endl;
    cout << "Units Consumed: " << e.unitsConsumed << endl;

    if (e.unitsConsumed < 100)
        cout << "Usage Category: Low Usage" << endl;
    else if (e.unitsConsumed <= 300)
        cout << "Usage Category: Moderate Usage" << endl;
    else
        cout << "Usage Category: High Usage" << endl;
}

int main()
{
    ElectricityMeter e(101, "Nishant", 100);

    checkUsage(e);

    return 0;
}