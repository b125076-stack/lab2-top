#include <iostream>
using namespace std;

class MobileRecharge
{
private:
    string mobileNo, customerName;
    float balance, recharge;

public:
    void input()
    {
        cout << "Enter Mobile Number: ";
        cin >> mobileNo;
        cout << "Enter Customer Name: ";
        cin >> customerName;
        cout << "Enter Current Balance: ";
        cin >> balance;
    }

    void rechargeBalance()
    {
        cout << "Enter Recharge Amount: ";
        cin >> recharge;

        if (recharge <= balance)
        {
            balance = balance - recharge;
            cout << "Recharge Successful!\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }

    void display()
    {
        cout << "Updated Balance = " << balance << endl;
    }
};

int main()
{
    MobileRecharge m;
    m.input();
    m.rechargeBalance();
    m.display();
    return 0;
}