#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "size of array: ";
    cin >> n;
    int arr[n];
    cout << "Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int carry = arr[j];
                arr[j] = arr[i];
                arr[i] = carry;
            }
        }
    }

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}