#include<iostream>

using namespace std;

int arrSum(int arr[], int size)
{
    if (size == 0)
        return 0;
    else if (size == 1)
        return arr[0];

    return arr[0] + arrSum(arr + 1, size -1);
}

int main()
{
    int arr[] = {5, 6, 4, 3, 9, 12};
    int size = 6;

    cout << "Sum of all elements in the array is: " << arrSum(arr, size) << endl;
    return 0;
}