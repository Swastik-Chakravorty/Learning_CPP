#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Please enter 1st number: ";
    cin >> a;
    cout << "Please enter 2nd number: ";
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "Now 1st number is: " << a << endl;
    cout << "Now 2nd number is: " << b << endl;

    return 0;
}