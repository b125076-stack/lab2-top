

#include <iostream>
using namespace std;

class Time
{
private:
    int h1, m1, h2, m2, hr, min;

public:
    void input()
    {
        cout << "Enter First Time (Hours Minutes): ";
        cin >> h1 >> m1;

        cout << "Enter Second Time (Hours Minutes): ";
        cin >> h2 >> m2;
    }

    void addTime()
    {
        hr = h1 + h2;
        min = m1 + m2;

        if (min >= 60)
        {
            hr += min / 60;
            min %= 60;
        }
    }

    void display()
    {
        cout << "Result = " << hr << " Hours " << min << " Minutes";
    }
};

int main()
{
    Time t;
    t.input();
    t.addTime();
    t.display();
    return 0;
}