#include<iostream>

using namespace std;

int main()
{
    float r;
    float a = 0;
    float p = 0;
    cout << "Please enter the radius of the Circle: ";
    cin >> r;
    a = 3.1416 * r * r;
    p = 2 * 3.1416 * r;
    cout << "Area of the Circle is: " << a << endl;
    cout << "Circumference of the Circle is: " << p << endl;
    return 0;
}