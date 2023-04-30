#include<iostream>

using namespace std;

bool pyth(int x, int y, int z)
{
    // int k = 0; another short way under
    int k = max(x, max(y, z));
    int rem1 = 0;
    int rem2 = 0;
    // if (x > y)
    // {
    //     if (x > z)
    //     {
    //         k = x;
    //         rem1 = y;
    //         rem2 = z;
    //     }
    //     else
    //     {
    //         k = z;
    //         rem1 = x;
    //         rem2 = y;
    //     }
    // }
    // else if (y > x)
    // {
    //     if (y > z)
    //     {
    //         k = y;
    //         rem1 = x;
    //         rem2 = z;
    //     }
    //     else
    //     {
    //         k = z;
    //         rem1 = y;
    //         rem2 = x;
    //     }
    // }
    //short way under
    if (k == x)
    {
        rem1 = y,
        rem2 = z;
    }
    else if (k == y)
    {
        rem1 = x,
        rem2 = z;
    }
    else
    {
        rem1 = x,
        rem2 = y;
    }
    if (k * k == rem1 * rem1 + rem2 * rem2)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int a, b, c;
    cout << "Enter the three sides of triangle: ";
    cin >> a >> b >> c;
    if (pyth(a, b, c))
    {
        cout << "Yes! it is a Pythagorian triplet" << endl;
    }
    else
    {
        cout << "No! it is not a Pythagorian triplet" << endl;
    }
    return 0;
}