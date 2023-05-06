#include<iostream>

using namespace std;

int searchArray(int arr[], int n, int key);

int main()
{
    int n;
    cout << "Size of array: ";
    cin >> n;
    int arr[n];

    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key: ";
    cin >> key;

    if (searchArray(arr, n, key) == -1)
    {
        cout << "Array is not found " << searchArray(arr, n, key) << endl;
    }
    
    else
    cout << "Key position in the array is: " << searchArray(arr, n, key) << endl;

    return 0;
}

int searchArray(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}