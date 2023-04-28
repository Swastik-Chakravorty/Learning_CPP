#include<iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "Enter the rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < ((n - 1) - i))
            {
                cout << "  ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}
