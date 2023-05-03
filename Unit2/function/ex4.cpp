#include<iostream>

using namespace std;

void fib(int num)
{
    int f[num];
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i < num; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << "Fibonnaci Series:" << endl;
    for(int j = 0; j < num; j++)
    {
        cout << f[j] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the natural number: ";
    cin >> n;
    fib(n);
    return 0;
}