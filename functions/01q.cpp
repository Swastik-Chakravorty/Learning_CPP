#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "Prime numbers are: ";
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}