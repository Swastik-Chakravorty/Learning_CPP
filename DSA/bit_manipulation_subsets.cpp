#include<iostream>

using namespace std;

void subsets(char arr[], int n)
{
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Total number of elements: ";
    cin >> n;
    char set[n] = {0};
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> set[i];
    }

    cout << "Subsets of the elements are:" << endl;
    subsets(set, n);

    return 0;
}