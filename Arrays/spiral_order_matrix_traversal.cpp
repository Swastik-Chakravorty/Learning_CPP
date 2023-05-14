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

    //Spiral order print -- row(strat to end) --> column(start to end) --> row(end to start) --> column(end to start)

    int row_start = 0;
    int row_end = n - 1;
    int column_start = 0;
    int column_end = m - 1;
    cout << "Spiral order print: " << endl;
    while (row_start <= row_end && column_start <= column_end)
    {
        //for row_start print column_start to column_end of that row, then increase the row
        for (int col = column_start; col <= column_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        //for column_end print row_start to row_end of that column, then decrease the column
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][column_end] << " ";
        }
        column_end--;

        //for row_end print column_end to column_start of that row, then decrease the row
        for (int col = column_end; col >=column_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end--;

        //for column_start print row_end to row_start of that column, then increase the column
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][column_start] << " ";
        }
        column_start++;
    }

    return 0;
}