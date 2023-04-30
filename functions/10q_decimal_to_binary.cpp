#include<bits/stdc++.h>

using namespace std;

int convert(int n)
{
    int bin = 0;
    int term = 1;
    while (term <= n)
    {
        term *= 2;
    }
    term /= 2;
    while (term > 0)
    {
        int lastdigit = n / term;
        n -= (lastdigit * term);
        term /= 2;
        bin = (bin * 10) + lastdigit;
    }
    return bin;
}

int main()
{
    int dec;
    cout << "Enter the Decimal number: ";
    cin >> dec;
    cout << "Binary number is: " << convert(dec) << endl;
    return 0;
}