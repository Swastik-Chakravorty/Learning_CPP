#include<iostream>

using namespace std;

int main()
{
    int h, m;
    cout << "hours: ";
    cin >> h;
    cout << "minutes: ";
    cin >> m;
    h = h * 60;
    m = m + h;
    cout << "Total: " << m << " minutes." << endl;
    return 0;
}