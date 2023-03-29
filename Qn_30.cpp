#include<iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    float avg = 0;
    cout << "Please enter 1st two numbers (separated by space) : ";
    cin >> a >> b;
    cout << "Please enter last two numbers (separated by space) : ";
    cin >> c >> d;
    avg = (float)(a + b + c + d) / 4;
    cout << "The total of four numbers is : " << (a + b + c + d) << endl;
    cout << "The average of four numbers is : " << avg << endl;
    return 0;
}