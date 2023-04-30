#include<bits/stdc++.h>

using namespace std;

string convert(int n)
{
    string hex = "";
    int term = 1;
    while (term <= n)
    {
        term *= 16;
    }
    term /= 16;
    while (term > 0)
    {
        int lastdigit = n / term;
        n -= (lastdigit * term);
        term /= 16;
        if (lastdigit <= 9)
        {
            hex = hex + to_string(lastdigit);
        }
        else
        {
            char ch = 'A' + lastdigit - 10;
            hex.push_back(ch);
        }
    }
    return hex;
}

int main()
{
    int dec;
    cout << "Enter the Decimal number: ";
    cin >> dec;
    cout << "Hexadecimal number is: " << convert(dec) << endl;
    return 0;
}