#include<bits/stdc++.h>

using namespace std;

void emi(const int &x, int &y, int &z) //constant argument is significant for reference variable and pointers, where we have to keep some value constant
{
    // x = 5; // a or x can't be changed, this will show error
    y = 10;
    z = 15;
}

int main()
{
    int a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    emi(a, b, c);
    
    cout << "after calling the function, a is: " << a << " b is: " << b << " c is: " << c << endl;

    return 0;
}
