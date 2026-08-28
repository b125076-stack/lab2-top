#include <iostream>
using namespace std;

void process(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    cout << "Sum of integer array = " << sum << endl;
}

void process(float arr[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    cout << "Sum of float array = " << sum << endl;
}

void process(int arr[], int size, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    cout << "Sum of first " << n << " elements = " << sum << endl;
}

int main()
{
    int a[100], n;
    float b[100], m;
    int k;

    cout << "Enter size of integer array: ";
    cin >> n;

    cout << "Enter integer elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    process(a, n);

    cout << "Enter size of float array: ";
    cin >> m;

    cout << "Enter float elements: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];

    process(b, m);

    cout << "Enter number of elements to sum from integer array: ";
    cin >> k;

    process(a, n, k);

    return 0;
}