// #include<iostream> we have to use bits/stdc++.h for all header files for standard, strings, vectors...
#include<bits/stdc++.h>
// #include<cmath>

using namespace std;

int convert(string n)
{
    int dec = 0;
    int term = 0;
    int s = n.size();

    for (int i = (s - 1); i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            dec += (n[i] - '0') * (pow(16, term));
            term++;
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            dec += (n[i] - 'A' + 10) * (pow(16, term));
            term++;
        }
    }
    return dec;
}

int main()
{
    string hex;
    cout << "Enter the Hexadecimal number: ";
    cin >> hex;
    cout << "Decimal number is: " << convert(hex) << endl;
    return 0;
}