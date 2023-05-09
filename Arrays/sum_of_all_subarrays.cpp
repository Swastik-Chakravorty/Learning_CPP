#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Array size: ";
    cin >> n;
    int arr[n];
    cout << "Array values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of all subarrays: " << endl;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << endl;
        }
    }
    return 0;
}