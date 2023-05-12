#include<iostream>

using namespace std;

//to find maximum circular subarray sum, we've to find the maximum in between wraped elements sum and non-wraped elements sum. to find non-wraped elements sum we'll use kadane algorithm and to find wraped elements sum, first have to change the signs of elements, then have to use kadane's algorithm to get the sum of those changed signed elements, now we've to substract kadane's sum from total sum of original array elements, so wraped sum = total sum - (-kadane's sum)-->[we use -kadane's sum here because we changed the signs of the elements before using kadane's algorithm] = total sum + kadane's sum

int kadane(int arr[], int size) //using kadane algorithm
{
    int curSum = 0;
    int maxSum = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        curSum += arr[i];
        if (curSum < 0)
        {
            curSum = 0;
        }
        maxSum = max(curSum, maxSum);
    }
    return maxSum;
}

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

    int wrapSum;
    int nonWrapSum = kadane(a, n);
    int totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        totalSum += a[i];
        a[i] = -a[i]; //after that a[n] will become -a[n]
    }

    wrapSum = totalSum + kadane(a, n); //wraped sum = total sum - (-kadane's sum)-->[we use -kadane's sum here because we changed the signs of the elements before using kadane's algorithm] = total sum + kadane's sum

    cout << "Maximum circular subarray sum is: " << max(wrapSum, nonWrapSum) << endl; //bigger between wrapped and non-wrapped will become the maximum

    return 0;
}