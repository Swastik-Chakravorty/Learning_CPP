#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    int k;
    cout << "Number of elements: ";
    cin >> n;
    cout << "Repeated times: ";
    cin >> k;
    int arr[n];
    int count[32] = {0};
    int index = 31; //as count will have 32 digits from 0 - 31
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        while (index >= 0)
        {
            count[index] += arr[i] & 1;
            index--;
            arr[i] >>= 1;
        }
        index = 31;
    }
    
    for (int i = 0; i < 32; i++)
    {
        if ((count[i] % k) == 0)
            count[i] = 0;
        else
            count[i] = 1;
    }

    int ans = 0;

    for (int i = 0; i < 32; i++)
    {
        ans += count[i] * pow(2, (31 - i));
    }
    cout << ans << endl;
    
    return 0;
}