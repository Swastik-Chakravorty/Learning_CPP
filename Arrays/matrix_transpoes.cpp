#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Number of Rows / columns for square matrix: ";
    cin >> n;
    int arr[n][n];
    cout << "Enter the elements of the square matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Transpose matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) //so that column will be higher always and we'll traverse only uper triangle elements to swap the matrix diagonaly
        {
                int swap = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = swap;
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}