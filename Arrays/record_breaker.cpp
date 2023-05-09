#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Total test cases: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int days = 0;
        cout << "Total days of case No. " << i + 1 << ": ";
        cin >> days;

        // *********MY APPROACH**********//

        // int arr[days];
        // cout << "Visitors of case No. " << i + 1 << " daywise: ";
        // for (int i = 0;i < days; i++)
        // {
        //     cin >> arr[i];
        // }

        // int ans = 0;
        // int mx = -1;
        // if (arr[0] > arr[1])
        // {
        //     ans++;
        //     mx = max(mx, arr[0]);
        // }

        // if (arr[days - 1] > arr[days - 2])
        // {
        //     ans++;
        //     mx = max(mx, arr[days - 1]);
        // }

        // for (int j = 1; j < (days - 1); j++)
        // {
        //     if (arr[j] > mx && arr[j] > arr[j + 1])
        //     {
        //         ans++;
        //         mx = max(mx, arr[j]);
        //     }
        // }

        //Above was my approach, now ***better approach*** from web

        int arr[days + 1]; //to compare i + 1 element
        arr[days] = -1; //here n is (days + 1)th element and as per question arr[i] > arr[i + 1] and no element should be negative, so original last element i.e. arr[days - 1] will always be greater than (days + 1)th element i.e. arr[days] / -1

        cout << "Visitors of case No. " << i + 1 << " daywise: ";
        for (int i = 0;i < days; i++)
        {
            cin >> arr[i];
        }

        if (days == 1)
        {
            cout << "1" << endl;
            return 0;
        }

        int ans = 0;
        int mx = -1;

        for (int i = 0; i < days; i++)
        {
            if (arr[i] > mx && arr[i] > arr[i + 1])
            {
                ans++;
            }
            mx = max(mx, arr[i]);
        }
        
        cout << "total record breaking days for test case No. " << i + 1 << " is: " << ans << endl;

    }
    return 0;
}