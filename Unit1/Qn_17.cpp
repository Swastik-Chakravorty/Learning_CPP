#include<iostream>

using namespace std;

int main()
{
    int l, b;
    int a = 0;
    int p = 0;
    cout << "Please enter the length of the rectangle: ";
    cin >> l;
    cout << "Please enter the breadth of the rectangle: ";
    cin >> b;
    a = l * b;
    p = 2 * (l + b);
    cout << "Area of the rectangle is: " << a << endl;
    cout << "Perimeter of the rectangle is: " << p << endl;
    return 0;
}