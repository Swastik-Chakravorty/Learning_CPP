#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float s1, s2, angle;
    float area = 0;
    cout << "Please enter one side length of the triangle: ";
    cin >> s1;
    cout << "Please enter another side length of the triangle: ";
    cin >> s2;
    cout << "Please enter angle between these sides of the triangle: ";
    cin >> angle;
    area = (s1 * s2 * sin((3.14159 / 180) * angle)) / 2;
    cout << "Area of the triangle is: " << area << endl;
    return 0;
}