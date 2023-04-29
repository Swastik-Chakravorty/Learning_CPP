#include<iostream>

using namespace std;

int fact(int num)
{
    int fct = 1;
    for (int i = 2; i <=num; i++)
    {
        fct *= i;
    }
    return fct;
}

int main()
{
    int n, r;
    float nCr = 0;
    cout << "Please enter the value of n & r: ";
    cin >> n >> r;
    nCr = fact(n) / (float)(fact(n - r) * fact(r));
    cout << "The value of nCr is: " << nCr << endl;

    return 0;
}