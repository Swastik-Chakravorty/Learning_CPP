#include<iostream>

using namespace std;

int sum(int num1, int num2);
void swap(int x, int y);
void swapPointer(int* x, int* y);
void swapRefVar(int &x, int &y);

int main()
{
    int a = 4;
    int b = 5;
    cout << "The sum of 4 and 5 is: " << sum(a, b) << endl;
    cout << "Before swaping a is: " << a << " and b is: " << b << endl;
    swap(a, b);
    cout << "After swaping (call by value) a is: " << a << " and b is: " << b << endl;
    swapPointer(&a, &b);
    cout << "After swaping (call by reference) a is: " << a << " and b is: " << b << endl;
    swapRefVar(a, b);
    cout << "After swaping (call by C++ reference variable) a(5) is: " << a << " and b(4) is: " << b << endl;
    
    return 0;
}

int sum(int num1, int num2)
{
    int c = num1 + num2;
    return c;
}

//This will not swap a and b (Call by value)
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

//This will swap a and b (Call by reference using pointer)
void swapPointer(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Call by reference using C++ reference variable
void swapRefVar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}