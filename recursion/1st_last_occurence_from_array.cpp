#include<iostream>

using namespace std;

int lastoccurence(int arr[], int size,int i, int key)
{
    if (i == size)
        return -1;

    if (arr[size - i] == key)
        return (size - i);

    return lastoccurence(arr, size, (i + 1), key);
}

int firstoccurence(int arr[], int size, int i, int key)
{
    if (i == size)
        return -1;

    if (arr[i] == key)
        return i;

    return firstoccurence(arr, size, (i + 1), key);
}

int main()
{
    int n;
    cout << "Array size: ";
    cin >> n;
    int array[n], key;
    cout << "Elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Searching key: ";
    cin >> key;

    int i = 0;

    cout << "First occurence: " << firstoccurence(array, n, i, key) << " position" << endl;
    cout << "Last occurence: " << lastoccurence(array, n, i, key) << " position" << endl;

    return 0;
}