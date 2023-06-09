#include<iostream>

using namespace std;

bool isPowerof2(int n)
{
    return (n && !(n & (n - 1)));
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (isPowerof2(num) == true)
        cout << "Yes! the number is power of 2" << endl;
    else
        cout << "No! the number isn't power of 2" << endl;

    return 0;

}