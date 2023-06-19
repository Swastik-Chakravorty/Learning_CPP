#include<iostream>

using namespace std;

void printBinary(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int s, int e, int k)
{
    cout << endl;
    printBinary(arr, s, e);
    if (s > e)
        return -1;
    int mid = (s + e) / 2;
    if (arr[mid] == k)
        return mid;
    
    else if (arr[mid] < k)
        return binarySearch(arr, (mid + 1), e, k);

    else
        return binarySearch(arr, s, (mid - 1), k);
}

int main()
{
    int arr[] = {2, 4, 6, 7, 11, 16, 19};
    int size = sizeof(arr) / sizeof(int);
    int key = 19;
    int start = 0;
    int end = size - 1;

    if (binarySearch(arr, start, end, key) > -1)
        cout << "Yes the key is present in the array position: " << binarySearch(arr, start, end, key) + 1 << endl;

    else    
        cout << "No the key is not present in the array" << binarySearch(arr, start, end, key) << endl;
    return 0;
}