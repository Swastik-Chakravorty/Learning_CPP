#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Array size: ";
    cin >> n;
    int a[n];
    cout << "elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Kadanes Algorithm approach --->> O(n) It's time saving
    // let's say array a[5] is {1 -4 3 2 1}, so as per Kadanes algorithm curSum's values will be {1, -3, 3, 5, 6}; as per visual, maximum number of subarray of a[5] is (3 + 2 + 1) = 6; to find this, approach will be like:
    //maximum variable which will store the value of curSum if previous stored value is less than the current value and that's how it'll give the maximum sum

    int curSum = 0; // to get the sum of elements till position i
    int maximum = 0; // maximum variable initializing with 0
    for (int i = 0; i < n; i++)
    {
        curSum += a[i]; //sum of elements till position i
        if (curSum < 0)
        {
            curSum = 0;
        }
        maximum = max(curSum, maximum); //maximum value between previous value and current value
    }

    cout << "Maximum subarray sum is: " << maximum << endl;
    return 0;
}