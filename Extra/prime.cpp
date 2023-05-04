#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    int flag = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Number is prime." << endl;
    }
    else if (flag == 1)
    {
        cout << "Number is not prime." << endl;
    }

    return 0;
}