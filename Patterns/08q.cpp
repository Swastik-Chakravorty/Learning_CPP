#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the rows: ";
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (j + 1) << " ";
        }
        cout << endl;
    }

    //or use this--->>
    // for (int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < (n - i); j++)
    //     {
    //         cout << (j + 1) << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}