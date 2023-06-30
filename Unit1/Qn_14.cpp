#include<iostream>

using namespace std;

int main()
{
    float r;
    float v = 0;
    cout << "Please enter the radius of the sphere: ";
    cin >> r;
    v = 1.3333 * 3.1416 * r * r * r;
    cout << "Volume of the sphere is: " << v << endl;
    return 0;
}