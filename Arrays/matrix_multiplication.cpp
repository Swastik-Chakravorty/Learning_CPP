#include<iostream>

using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Enter the number of rows of 1st matrix: ";
    cin >> n1;
    cout << "Enter the number of columns of 1st matrix / rows of 2nd matrix: ";
    cin >> n2;
    cout << "Enter the number of columns of 2nd matrix: ";
    cin >> n3;
    int m1[n1][n2];
    int m2[n2][n3];

    cout << "Enter the elements of 1st matrix: " << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];
        }
    }

    cout << "Enter the elements of 2nd matrix: " << endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j];
        }
    }

    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j]; //for m1[3][4] and m2[4][5] --> ans[0][0] = (m1[0][0] * m2[0][0]) + (m1[0][1] * m2[1][0]) + (m1[0][2] * m2[2][0]) + (m1[0][3] * m2[3][0])...ans[0][4] = (m1[0][0] * m2[0][4]) + (m1[0][1] * m2[1][4]) + (m1[0][2] * m2[2][4]) + (m1[0][3] * m2[3][4])
            }
        }
    }

    cout << "Matrix after multiplication of 1st and 2nd matrices: " << endl;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}