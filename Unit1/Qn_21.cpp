#include<iostream>

using namespace std;

int main()
{
    float f;
    float c = 0;
    cout << "Please enter the temparatuer in celcius: ";
    cin >> f;
    c = (f - 32) * (5.00 / 9.00);
    cout << "The temparatuer in fahrenheit is: " << c << endl;
    return 0;
}