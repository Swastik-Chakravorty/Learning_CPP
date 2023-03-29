#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float a, b, c;
    float s = 0;
    float area = 0;
    cout << "Please enter 1st side length of the triangle: ";
    cin >> a;
    cout << "Please enter 2nd side length of the triangle: ";
    cin >> b;
    cout << "Please enter 3rd side length of the triangle: ";
    cin >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area of the triangle is: " << area << endl;
    return 0;
}