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

    // Cumulative sum approach --->> O(n^2) It's also too much time taking but compared to Brute force it's time saving
    // let's say array a[5] is {1 -4 3 2 1}, so cumulative sum array curSum[5 + 1] will be {0 1 -3 0 2 3}; as per visual, maximum number of subarray of a[5] is (3 + 2 + 1) = 6; to find this, approach will be like:
    //1 - 0 = 1
    //-3 - 0 = -3 / -3 - 1 = -4
    //0 - 0 = 0 / 0 - 1 = -1 / 0 - (-3) = 3
    //2 - 0 = 2 / 2 - 1 = 1 / 2 - (-3) = 5 / 2 - 0 = 2
    //3 - 0 = 3 / 3 - 1 = 2 / 3 - (-3) = 6 / 3 - 0 = 3 / 3 - 2 = 1 (Till last when we'll compare the values, we'll find 6 will be the maximum sum)
    int curSum[n + 1]; // to compare with it's 1st value we take n + 1, as [0] = 0
    curSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        curSum[i] = curSum[i - 1] + a[i - 1]; //from [1] we are storing sum till number
    }

    int maxSum = INT8_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;//for every subarray sum initializing to 0
        for (int j = 0; j < i; j++)
        {
            sum = curSum[i] - curSum[j];//getting the value of each position comparing with previous ones
            maxSum = max(maxSum, sum);//keeping record of maximum sum till position
        }
    }

    cout << "Maximum subarray sum is: " << maxSum << endl;
    return 0;
}