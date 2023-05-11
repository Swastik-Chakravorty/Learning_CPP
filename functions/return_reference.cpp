#include<iostream>

using namespace std;

int & RefVar(int &x, int &y);

int main()
{
    int a = 4;
    int b = 5;
    cout << "Before calling the function a is: " << a << " and b is: " << b << endl;

    RefVar(a, b) = 746; //now changing the reference of a (&x which is &a)

    cout << "After calling the function which return by reference a is: " << a << " and b is: " << b << endl;
    
    return 0;
}

// Returning reference variable of int type by "int &"
int & RefVar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    return x;
}