#include <iostream>
using namespace std;

void check(int n)
{
    if (n > 0)
        cout << "Positive number" << endl;
    else if (n < 0)
        cout << "Negative number" << endl;
    else
        cout << "Zero" << endl;
}

void check(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase letter" << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase letter" << endl;
    else
        cout << "Not an alphabet" << endl;
}

void check(char arr[], int size, char target)
{
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Character found at position " << i << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Character not found" << endl;
}

int main()
{
    int n;
    char ch;
    char arr[100];
    int size;
    char target;

    cout << "Enter an integer: ";
    cin >> n;
    check(n);

    cout << "Enter a character: ";
    cin >> ch;
    check(ch);

    cout << "Enter size of character array: ";
    cin >> size;

    cout << "Enter characters: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter character to search: ";
    cin >> target;

    check(arr, size, target);

    return 0;
}