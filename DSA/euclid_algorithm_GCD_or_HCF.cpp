#include<iostream>

using namespace std;

int gcd_number(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a; //in the end b = reminder = 0 and a = b(last)
}

int main()
{
    int x, y;
    cout << "enter the two numbers: ";
    cin >> x >> y;

    cout << "HCF of " << x << " & " << y << " is: " << gcd_number(x, y) << endl;
    return 0;
}