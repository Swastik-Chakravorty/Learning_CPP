#include<iostream>

using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;

    //length of left array
    int lenL = mid - s + 1;

    //length of right array
    int lenR = e - mid;

    //heap memory allocation
    int *first = new int[lenL];
    int *second = new int[lenR];

    //copy values left side
    int mainArrayIndex = s;
    for (int i = 0; i < lenL; i++)
    {
        first[i] = arr[mainArrayIndex++];//k-th value will store in i-th, then k will become k++
    }

    //copy values right side
    mainArrayIndex = mid + 1;
    for (int i = 0; i < lenR; i++)
    {
        second[i] = arr[mainArrayIndex++];//k-th value will store in i-th, then k will become k++
    }

    //merge 2 sorted arrays
    int indexL = 0;
    int indexR = 0;
    mainArrayIndex = s;

    while (indexL < lenL && indexR < lenR) //index should be in their limit
    {
        if (first[indexL] < second[indexR])
            arr[mainArrayIndex++] = first[indexL++];//first values will set then ++

        else
            arr[mainArrayIndex++] = second[indexR++];
    }

    //if the lengths are different for left & right
    while (indexL < lenL)
    {
        arr[mainArrayIndex++] = first[indexL++];
    }

    while (indexR < lenR)
    {
        arr[mainArrayIndex++] = second[indexR++];
    }

    //delete heap memories
    delete[]first;
    delete[]second;
}

void mergeSort(int arr[], int s, int e)
{
    //base case
    if (s >= e)
        return;

    //mid
    int mid = (s + e) / 2;

    //left part sort
    mergeSort(arr, s, mid);

    //right part sort
    mergeSort(arr, mid + 1, e);

    //merge
    merge(arr, s, e);
}

int main()
{
    int arr[15] = {2, 15, 10, 6, 29, 3, 1, 13, 11, 7, 9, 22, 5, 18, 4};
    int n = 15;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < 15; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}