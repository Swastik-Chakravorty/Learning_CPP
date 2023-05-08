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
        for (int k = i; k >= 0; k--)
        {
            cout << (k + 1) << " ";
        }
        if (i != 0)
        {
            for (int l = 1; l <= i; l++)
            {
                cout << (l + 1) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}