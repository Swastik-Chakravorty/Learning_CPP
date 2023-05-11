#include<iostream>

using namespace std;

// int sum(int a, int b)
// {
//     cout << "Using function with 2 arguments" << endl;
//     return a + b;
// }
// int sum(int a, int b, int c)
// {
//     cout << "Using function with 3 arguments" << endl;
//     return a + b + c;
// }

//Calculate the volume of a cylinder
int volume(double r, int h) //functions with same name but with different parameters(arguments) and perform different works is called function overloading
{
    return (3.14 * r * r * h);
}

//Calculate the volume of a cube
int volume(int a)
{
    return (a * a * a);
}

//Calculate the volume of a rectangular box
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    // cout << "The sum of 3 and 6 is: " << sum(3, 6) << endl;
    // cout << "The sum of 3, 7 and 6 is: " << sum(3, 7, 6) << endl;
    cout << "The volume of Cylinder of radius 3 and height 6 is: " << volume(3, 6) << endl;
    cout << "The volume of Cube of side 3is: " << volume(3) << endl;
    cout << "The volume of Rectangular box of side 3, breadth 7 and height 6 is: " << volume(3, 7, 6) << endl;
    return 0;
}