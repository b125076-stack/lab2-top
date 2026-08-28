#include <iostream>
#include <cmath>
using namespace std;

void nearValue(int a, int b)
{
    if (abs(a) < abs(b))
        cout << a << " is closer to zero" << endl;
    else if (abs(b) < abs(a))
        cout << b << " is closer to zero" << endl;
    else
        cout << "Both are equally close to zero" << endl;
}

void nearValue(float a, float b)
{
    if (fabs(a) < fabs(b))
        cout << a << " is closer to zero" << endl;
    else if (fabs(b) < fabs(a))
        cout << b << " is closer to zero" << endl;
    else
        cout << "Both are equally close to zero" << endl;
}

void nearValue(int arr[], int size)
{
    int nearest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (abs(arr[i]) < abs(nearest))
            nearest = arr[i];
    }

    cout << nearest << " is closest to zero" << endl;
}

int main()
{
    int a =4, b =3;
    float x =2.34, y =3.4;
    int arr[100] , n;
    cout<<" enter the no : "<<endl;
    cin >> a >> b;
    nearValue(a, b);
    cout<<" Enter the float : "<<endl; 
    cin >> x >> y;
    nearValue(x, y);

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    nearValue(arr, n);

    return 0;
}