#include<iostream>

using namespace std;

int power(int n, int p)
{
    if (p == 0)
        return 1;
    return n * power(n, (p - 1));
}

int main()
{
    int num, pwr;
    cout << "Enter the number and raised to the power: ";
    cin >> num >> pwr;
    cout << "Result of " << num << " raised to power of " << pwr << " is: " << power(num, pwr);
    return 0;
}