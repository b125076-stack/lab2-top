#include <iostream>
using namespace std;

void convert(int km)
{
    int meters = km * 1000;
    cout << km << " kilometers = " << meters << " meters" << endl;
}

void convert(int meters, char)
{
    int centimeters = meters * 100;
    cout << meters << " meters = " << centimeters
         << " centimeters" << endl;
}

void convert(float km)
{
    float meters = km * 1000;
    cout << km << " kilometers = " << meters
         << " meters" << endl;
}

int main()
{
    int km;
    int meters;
    float decimalKm;

    cout << "Enter distance in kilometers (integer): ";
    cin >> km;

    convert(km);

    cout << "Enter distance in meters: ";
    cin >> meters;

    convert(meters);

    cout << "Enter distance in kilometers (decimal): ";
    cin >> decimalKm;

    convert(decimalKm);

    return 0;
}