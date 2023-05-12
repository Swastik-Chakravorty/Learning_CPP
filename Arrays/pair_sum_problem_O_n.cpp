#include<iostream>

using namespace std;

// O(n)
bool pairsum(int arr[], int size, int key)
{
    int low = 0;
    int high = size + 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == key)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] > key)
        {
            high--;
        }
        else
            low++;
    }
    return false;
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
    int key;
    cout << "Given key: ";
    cin >> key;
    cout << pairsum(a, n, key) << endl;

    return 0;
}