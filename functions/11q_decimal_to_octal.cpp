#include<bits/stdc++.h>

using namespace std;

int convert(int n)
{
    int oct = 0;
    int term = 1;
    while (term <= n)
    {
        term *= 8;
    }
    term /= 8;
    while (term > 0)
    {
        int lastdigit = n / term;
        n -= (lastdigit * term);
        term /= 8;
        oct = (oct * 10) + lastdigit;
    }
    return oct;
}

int main()
{
    int dec;
    cout << "Enter the Decimal number: ";
    cin >> dec;
    cout << "Octal number is: " << convert(dec) << endl;
    return 0;
}