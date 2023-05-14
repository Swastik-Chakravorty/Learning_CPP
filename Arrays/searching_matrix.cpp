#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Rows and columns: ";
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cout << "Enter the key: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "Yes the key is here, and it's position in the matrix is: " << i + 1 << " " << j + 1 << endl;
            }
        }
    }

    return 0;
}