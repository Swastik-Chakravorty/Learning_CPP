#include<iostream>
#include<string>

using namespace std;

int main()
{
    string fName, sName, yob;
    cout << "your firstname: ";
    cin >> fName;
    cout << "your lastname: ";
    cin >> sName;
    cout << "your year of birth: ";
    cin >> yob;
    cout << fName << " " << sName << " " << yob << endl;
    return 0;
}