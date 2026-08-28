#include <iostream>
#include <cstring>
using namespace std;

void information(char arr[])
{
    int length = strlen(arr);
    cout << "Length = " << length << endl;
}

void information(char arr[], char target)
{
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == target)
            count++;
    }

    cout << "Occurrence = " << count << endl;
}

void information(char arr[], char target, int positions)
{
    int count = 0;

    for (int i = 0; i < positions && arr[i] != '\0'; i++)
    {
        if (arr[i] == target)
            count++;
    }

    cout << "Occurrence in first " << positions
         << " positions = " << count << endl;
}

int main()
{
    char arr[100];
    char target;
    int positions;

    cout << "Enter a string: ";
    cin >> arr;

    cout << "Enter character: ";
    cin >> target;

    cout << "Enter number of positions: ";
    cin >> positions;

    information(arr);
    information(arr, target);
    information(arr, target, positions);

    return 0;
}