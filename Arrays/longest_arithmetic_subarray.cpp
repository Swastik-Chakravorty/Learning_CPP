#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Total test cases: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sz = 0;
        cout << "Array size of case No. " << i + 1 << ": ";
        cin >> sz;
        int arr[sz];
        cout << "Elements of No. " << i + 1 << " Array: ";
        for (int i = 0;i < sz; i++)
        {
            cin >> arr[i];
        }

        int ans = 2;
        int pd = arr[1] - arr[0];
        int j = 2;
        int curr = 2;

        while (j < sz)
        {
            if (pd == arr[j] - arr[j - 1])
            {
                curr++;
            }
            else
            {
                pd = arr[j] - arr[j - 1];
                curr = 2;
            }
            ans = max(ans, curr); //this will help to keep the longest subarray length
            j++;
        }
        cout << "longest arithematic subarray length for test case No. " << i + 1 << " is: " << ans << endl;

    }

    return 0;
}