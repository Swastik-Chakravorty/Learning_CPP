#include<iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the one digit number: ";
    cin >> num;
    for (int i = 0; i < 6; i++)
    {
            for (int j = 0; j < 4; j++)
            {
                if ((i == 0) || (i == 5) || (j == 0) || (j == 3))
                {
                    cout << num;
                }
                else{
                    cout << " ";
                }
            }
            cout << endl;
    }
        
    return 0;
}