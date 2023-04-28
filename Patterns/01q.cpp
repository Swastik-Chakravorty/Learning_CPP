#include<iostream>

using namespace std;

int main()
{
    int row, column;
    cout << "Enter the Rows: ";
    cin >> row;
    cout << "Enter the columns: ";
    cin >> column;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}