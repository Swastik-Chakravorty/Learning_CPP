#include<iostream>

using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    return (n & (~(1 << pos)));
}

int updateBit(int n, int pos, int v)
{
    n = n & (~(1 << pos));
    return (n | (v << pos));
}

bool oddEven(int n)
{
    return ((n & 1) == 0);
}

void swap(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swaping a: " << a << " and b: " << b << endl;
}

int main()
{
    cout << getBit(5, 2) << endl;
    cout << setBit(5, 1) << endl;
    cout << clearBit(5, 2) << endl;
    cout << updateBit(5, 1, 1) << endl;
    oddEven(4) ? cout << "Even" << endl : cout << "Odd" << endl;
    cout << "Before swaping a: 5 and b: 7" << endl;
    swap(5, 7); //after swaping
    
    return 0;
}