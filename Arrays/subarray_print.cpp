#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Array size: ";
    cin >> n;
    int a[n];
    cout << "elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "All possible subarrays are:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}