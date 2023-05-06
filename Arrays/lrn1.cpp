#include<iostream>
#include<climits> //for INT_MAX; INT_MIN

using namespace std;

int main()
{
    int n;
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    cout << "Enter the number of arrays: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        //better approach
        maxNo = max(maxNo, arr[i]);
        // if (max < arr[i])
        // {
        //     max = arr[i];
        // }

        minNo = min(minNo, arr[i]);
        // if (min > arr[i])
        // {
        //     min = arr[i];
        // }
    }
    
    cout << "Maximum number is: " << maxNo << endl;
    cout << "Minimum number is: " << minNo << endl;

    return 0;
}