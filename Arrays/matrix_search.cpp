#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Number of Rows and columns for sorted(row wise and also column wise) matrix: ";
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter the elements of the sorted(row wise and also column wise) matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cout << "Enter the key searching element: ";
    cin >> key;

    //top right position of matrix
    int r = 0;
    int c = m - 1;
    bool found = false;
    while (r < n && c >=0)
    {
        if (arr[r][c] == key)
        {
            cout << "Yes! " << key << " is present in the array and it's position is: " << r + 1 << "-" << c + 1 << endl;
            found = true;
            break;
        }
        else if (arr[r][c] > key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found == false)
    {
        cout << "Key is not found!" << endl;
    }

    return 0;
}