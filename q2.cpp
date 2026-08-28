#include <iostream>
using namespace std;

void area(int side)
{
    int result = side * side;
    cout << "Area of square = " << result << endl;
}

void area(int length, int width)
{
    int result = length * width;
    cout << "Area of rectangle = " << result << endl;
}

void area(double radius)
{
    double result = 3.14159 * radius * radius;
    cout << "Area of circle = " << result << endl;
}

int main()
{
    int side;
    int length, width;
    double radius;

    cout << "Enter side of square: ";
    cin >> side;

    area(side);

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;

    area(length, width);

    cout << "Enter radius of circle: ";
    cin >> radius;

    area(radius);

    return 0;
}