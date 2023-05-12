#include<iostream>

using namespace std;

int main()
{
    int n, s;
    cout << "Array size: ";
    cin >> n;
    cout << "Key sum: ";
    cin >> s;
    int a[n];
    cout << "Elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0; //to find starting index
    int j = 0; //to find ending index
    int sum = 0;

    while (j < n && sum + a[j] <= s) //starting from 0 index we'll adding each element untill previous sum + current j-th element become bigger than s
    {
        sum += a[j];
        j++; //increased by 1 even after sum = / < s
    }

    if (sum == s) // if so, starting index from i but ending index even after sum = s, increased by 1, j++
    {
        //so here i should be increased by 1 but j shouldn't be
        cout << "Starting index: " << i + 1 << " and ending index: " << j << endl;
        return 0;
    }

    while (j < n) //updated j value in the previous loop -- WE started this loop with increased j (in previous loop we already checked subarrays till (j - 1)-th position) to check next subarrays(continuos)
    {
        sum += a[j]; //as j is already increased in previous while but not added in sum, so in this while loop, we'll 1st added a[j] in sum and we'll add j-th value again in this sum if sum is still less than s in this outer loop
        while (sum > s) //we'll increase the starting value (i) and substract the i-th value from sum untill sum become less to equal to s
        {
            sum -= a[i]; //substructing the starting index (i-th) element to make sum less or equal to s
            i++; //increasing the i to increase the starting index
        }

        if (sum == s) //now after substruction i-th value from inner loop and increasing j-th value from outer loop if 
        {
            cout << "Starting index: " << i + 1 << " and ending index: " << j + 1 << endl; 
            break;
        }
        j++;
    }

    cout << "Subarray with given sum is not found!" << endl;
    
    return 0;
}