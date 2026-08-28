#include <iostream>
using namespace std;

void inspect(int x)
{
    cout << "Value of integer = " << x << endl;
}

void inspect(int *p)
{
    cout << "Value stored at pointer = " << *p << endl;
}

void inspect(int *arr, int size)
{
    cout << "Array elements: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int x = 10;
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    inspect(x);
    inspect(&x);
    inspect(arr, size);

    return 0;
}