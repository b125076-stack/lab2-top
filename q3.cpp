#include <iostream>
using namespace std;

class Camera
{
private:
    string brand;
    string model;
    int megapixels;
    int storageCapacity;

public:
    Camera(string b, string m, int mp, int storage)
    {
        brand = b;
        model = m;
        megapixels = mp;
        storageCapacity = storage;
    }

    friend void compareCamera(Camera c1, Camera c2);
};

void compareCamera(Camera c1, Camera c2)
{
    Camera better = c1;

    if (c2.megapixels > c1.megapixels)
    {
        better = c2;
    }
    else if (c1.megapixels == c2.megapixels)
    {
        if (c2.storageCapacity > c1.storageCapacity)
            better = c2;
    }

    cout << "Better Camera:" << endl;
    cout << "Brand: " << better.brand << endl;
    cout << "Model: " << better.model << endl;
    cout << "Megapixels: " << better.megapixels << endl;
    cout << "Storage Capacity: " << better.storageCapacity << " GB" << endl;
}

int main()
{
    Camera c1("apple", "ioS 34D", 24, 64);
    Camera c2("Samssung", " dd v9", 24, 128);

    compareCamera(c1, c2);

    return 0;
}