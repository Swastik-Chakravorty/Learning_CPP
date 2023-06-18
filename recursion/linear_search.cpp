#include<iostream>

using namespace std;

void printArrSize(int arr[], int size)
{
    cout << "Size of array is: " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int k)
{
    printArrSize(arr, size);

    if (size == 0)
        return false;

    if (arr[0] == k)
        return true;

    return linearSearch(arr + 1, size - 1, k);
}

int main()
{
    int arr[] = {4, 5, 2, 9, 15, 3};
    int size = sizeof(arr) / sizeof(int);
    int key = 9;

    if (linearSearch(arr, size, key))
        cout << "Yes the key is present in the array!" << endl;

    else    
        cout << "No the key is not present in the array!" << endl;

    return 0;
}