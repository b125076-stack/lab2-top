#include <iostream>
using namespace std;

void evaluate(int a, int b)
{
    cout << "Average = " << (a + b) / 2.0 << endl;
}

void evaluate(int a, int b, int c)
{
    cout << "Average = " << (a + b + c) / 3.0 << endl;
}

void evaluate(float a, float b)
{
    cout << "Average = " << (a + b) / 2 << endl;
}

void evaluate(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    cout << "Average = " << (double)sum / size << endl;
}

void evaluate(int *a, int *b)
{
    cout << "Average = " << (*a + *b) / 2.0 << endl;
}

int main()
{
    int a, b, c;
    float x, y;
    int arr[100], n;

    cin >> a >> b;
    evaluate(a, b);

    cin >> c;
    evaluate(a, b, c);

    cin >> x >> y;
    evaluate(x, y);

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    evaluate(arr, n);

    evaluate(&a, &b);

    return 0;
}