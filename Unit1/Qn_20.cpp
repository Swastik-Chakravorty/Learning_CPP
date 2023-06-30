#include<iostream>

using namespace std;

int main()
{
    float c;
    float f = 0;
    cout << "Please enter the temparatuer in celcius: ";
    cin >> c;
    f = ((9.00 / 5.00) * c) + 32;
    cout << "The temparatuer in fahrenheit is: " << f << endl;
    return 0;
}