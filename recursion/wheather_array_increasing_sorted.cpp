#include<iostream>

using namespace std;

bool sort(int arr[], int n)
{
    if (n == 1)
        return 1;

    bool restArray = sort((arr + 1), (n - 1));
    return (arr[0] < arr[1] && restArray);
}

int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements of the array: " << endl;

    for (int i = 0; i <n; i++)
        cin >> array[i];
    
    if (sort(array, n))
        cout << "Yes! the array is sorted" << endl;
    else
        cout << "No! the array is not sorted" << endl;

    return 0;
}