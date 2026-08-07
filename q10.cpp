#include <iostream>
using namespace std;

class WaterBill
{
private:
    int consumerNo, litres;
    string consumerName;
    float bill;

public:
    void input()
    {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;
        cout << "Enter Consumer Name: ";
        cin >> consumerName;
        cout << "Enter Water Consumption (Litres): ";
        cin >> litres;
    }

    void calculate()
    {
        if (litres <= 500)
            bill = litres * 2;
        else if (litres <= 1000)
            bill = (500 * 2) + ((litres - 500) * 3);
        else
            bill = (500 * 2) + (500 * 3) + ((litres - 1000) * 5);
    }

    void display()
    {
        cout << "\nConsumer Name : " << consumerName;
        cout << "\nWater Bill : Rs. " << bill;
    }
};

int main()
{
    WaterBill w;
    w.input();
    w.calculate();
    w.display();
    return 0;
}