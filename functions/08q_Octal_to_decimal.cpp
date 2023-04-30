#include<iostream>
#include<cmath>

using namespace std;

int convert(int n)
{
    int dec = 0;
    int rem = 0;
    int term = 0;
    while (n > 0)
    {
        rem = n % 10;
        dec += rem * (pow (8, term));
        term++;
        n /= 10;
    }
    return dec;
}

int main()
{
    int oct;
    cout << "Enter the Octal number: ";
    cin >> oct;
    cout << "Decimal number is: " << convert(oct) << endl;
    return 0;
}