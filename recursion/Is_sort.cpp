#include<iostream>

using namespace std;

bool isSort(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;

    else
        return isSort(arr + 1, size - 1);
}

int main()
{
    int arr[] = {2, 5, 8, 12, 15, 20};
    int size = 6;

    if (isSort(arr, size))
        cout << "The array is sorted!" << endl;

    else
        cout << "The array is not sorted!" << endl;
    return 0;
}