#include<iostream>

using namespace std;

int main()
{
    float r, h;
    float v = 0;
    cout << "Please enter the radius of the Cylinder: ";
    cin >> r;
    cout << "Please enter the height of the Cylinder: ";
    cin >> h;
    v = 3.1416 * r * r * h;
    cout << "Volume of the Cylinder is: " << v << endl;
    return 0;
}