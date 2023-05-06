#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int key);

int main()
{
    int n;
    cout << "Array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in sort: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key:";
    cin >> key;

    if (binarySearch(arr, n, key) == -1)
    {
        cout << "Key isn't present in the array " << binarySearch(arr, n, key) << endl;
    }
    else
        cout << "Key's position in the array is: " << binarySearch(arr, n, key) << endl;

    return 0;
}

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}