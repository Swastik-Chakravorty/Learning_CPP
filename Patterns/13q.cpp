#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1 - i); j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < (((i + 1) * 2) - 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    for (int i = (n - 1); i >= 0; i--)
    {
        for (int j = 0; j < (n - 1 - i); j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < (((i + 1) * 2) - 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}