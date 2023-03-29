#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double pi = 3.14159265;
    cout << fixed << setprecision(4); //It will print upto 4 decimals
    cout << "The value of pi : " << pi << endl;
    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << pi << "|" << endl; //it will take places for 8 digits / characters
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 8 : |" << setfill ('-') << setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setfill ('-') << setw(10) << pi << "|" << endl;
    cout << "The value of pi in scientific format is : " << (float)pi << endl;

    bool done = false;
    cout <<" Status in number : " << done << endl;  
    cout << boolalpha;
    cout <<" Status in alphabet : " << done << endl;
    cout << endl;

    return 0;
}