#include<iostream>

using namespace std;

void dec(int n)
{
    if (n == 1)
    {
        cout << "1" << " ";
        return;
    }
    
    cout << n << " ";
    dec(n - 1);
}

void inc(int n)
{
    if (n == 1)
    {
        cout << "1" << " ";
        return;
    }
    
    inc(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "till number: ";
    cin >> n;
    cout << "Decreasing order: ";
    dec(n);
    cout << endl;
    cout << "Increasing order: ";
    inc(n);
    cout << endl;
    return 0;
}