#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Array size: ";
    cin >> n;
    int arr[n];
    cout << "Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int ptr = i - 1;
        while (temp < arr[ptr] && ptr >= 0)
        {
            arr[ptr + 1] = arr[ptr];
            ptr--;
        }
        arr[ptr + 1] = temp;       
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}