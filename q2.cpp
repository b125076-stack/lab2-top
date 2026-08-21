#include <iostream>
using namespace std;

class UserAccount
{
private:
    string username;
    int loginAttempts;
    string accountStatus;

public:
    UserAccount(string name, int attempts, string status)
    {
        username = name;
        loginAttempts = attempts;
        accountStatus = status;
    }

    friend void checkAccount(UserAccount u);
};

void checkAccount(UserAccount u)
{
    cout << "Username: " << u.username << endl;
    cout << "Login Attempts: " << u.loginAttempts << endl;

    if (u.loginAttempts >= 3)
    {
        cout << "Account Status: Account Locked" << endl;
    }
    else
    {
        cout << "Account Status: Account Active" << endl;
    }
}

int main()
{
    UserAccount u("Nishant", 2, "Active");

    checkAccount(u);

    return 0;
}