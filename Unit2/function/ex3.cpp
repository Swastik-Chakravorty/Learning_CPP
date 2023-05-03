#include<iostream>

using namespace std;

int fib(int num);

int main()
{
    int n;
    cout << "Enter the natural number: ";
    cin >> n;
    cout << "Fibonnaci Series:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }
    cout << endl;
    return 0;
}

int fib(int num)
{
    if(num == 0 || num == 1)
    {
        return num;
    }

    return fib(num - 1) + fib(num - 2);
}