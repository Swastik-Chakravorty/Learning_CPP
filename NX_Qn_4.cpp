#include<iostream>

using namespace std;

int main()
{
    float km;
    float mi = 0;
    cout << "kilometers per hour: ";
    cin >> km;
    mi = km * 0.62137;
    cout << mi << "miles per hour" << endl;
    return 0;
}