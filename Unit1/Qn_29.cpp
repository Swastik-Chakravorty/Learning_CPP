#include<iostream>

using namespace std;

int main()
{
    int dvd, dvsr;
    int qtnt = 0;
    int rmndr = 0;
    cout << "Please enter the dividend: ";
    cin >> dvd;
    cout << "Please enter the divisor: ";
    cin >> dvsr;
    qtnt = dvd / dvsr;
    rmndr = dvd % dvsr;
    cout << "The quotient of the division is :" << qtnt << endl;
    cout << "The remainder of the division is :" << rmndr << endl;
    return 0;
}