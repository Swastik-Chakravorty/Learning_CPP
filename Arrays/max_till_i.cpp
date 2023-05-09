#include<iostream>

using namespace std;

int main()
{
    int mx = -9999999;
    int n;
    cout << "Array size: ";
    cin >> n;
    int arr[n];
    cout << "Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }
    cout << endl;
    return 0;
}