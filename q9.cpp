#include <iostream>
using namespace std;

class DigitalWallet
{
private:
    string userName;
    double walletBalance;
    string walletStatus;

public:
    DigitalWallet(string name, double balance)
    {
        userName = name;
        walletBalance = balance;
        walletStatus = "Active";
    }

    friend class WalletManager;
};

class WalletManager
{
public:
    void displayWallet(DigitalWallet &w)
    {
        cout << "User Name: " << w.userName << endl;
        cout << "Wallet Balance: " << w.walletBalance << endl;
        cout << "Wallet Status: " << w.walletStatus << endl;
    }

    void addMoney(DigitalWallet &w, double amount)
    {
        w.walletBalance += amount;
        cout << "Money added successfully." << endl;
    }

    void deductMoney(DigitalWallet &w, double amount)
    {
        if (w.walletBalance >= amount)
        {
            w.walletBalance -= amount;
            cout << "Money deducted successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void disableWallet(DigitalWallet &w)
    {
        w.walletStatus = "Disabled";
        cout << "Wallet disabled." << endl;
    }

    void displayStatus(DigitalWallet &w)
    {
        cout << "Current Wallet Status: "
             << w.walletStatus << endl;
    }
};

int main()
{
    DigitalWallet wallet("Nishant", 1000);
    WalletManager manager;

    manager.displayWallet(wallet);

    manager.addMoney(wallet, 500);

    manager.deductMoney(wallet, 300);

    manager.displayWallet(wallet);

    manager.disableWallet(wallet);

    manager.displayStatus(wallet);

    return 0;
}