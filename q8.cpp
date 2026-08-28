#include <iostream>
using namespace std;

void update(int &x, int amount)
{
    x += amount;
}

void update(float &x, float amount)
{
    x += amount;
}

void update(int arr[], int size, int amount)
{
    for (int i = 0; i < size; i++)
        arr[i] += amount;
}

int main()
{
    int x;
    float y;
    int arr[100], n, amount;

    cin >> x >> amount;
    cout << "Before: " << x << endl;
    update(x, amount);
    cout << "After: " << x << endl;

    cin >> y;
    float fAmount;
    cin >> fAmount;

    cout << "Before: " << y << endl;
    update(y, fAmount);
    cout << "After: " << y << endl;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> amount;

    update(arr, n, amount);

    cout << "Updated array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}