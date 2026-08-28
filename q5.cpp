#include <iostream>
using namespace std;

void swapData(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapData(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

void swapData(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;
    float x = 1.5, y = 2.5;
    int p = 30, q = 40;

    cout << "Before integer swap: " << a << " " << b << endl;
    swapData(a, b);
    cout << "After integer swap: " << a << " " << b << endl;

    cout << "Before float swap: " << x << " " << y << endl;
    swapData(x, y);
    cout << "After float swap: " << x << " " << y << endl;

    cout << "Before pointer swap: " << p << " " << q << endl;
    swapData(&p, &q);
    cout << "After pointer swap: " << p << " " << q << endl;

    return 0;
}