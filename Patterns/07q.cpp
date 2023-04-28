#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        int space = ((2 * n) - (2 * (i + 1)));
        for (int k = 0; k < space; k++)
        {
            cout << "  ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = (n - 1); i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        int space = ((2 * n) - (2 * (i + 1)));
        for (int k = 0; k < space; k++)
        {
            cout << "  ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}