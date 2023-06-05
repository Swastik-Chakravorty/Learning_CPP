#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1 = "Swastik";
    cout << s1 << endl;

    s1.clear();

    if (s1.empty()) //!s1.empty() is consider not entry
    {
        cout << "String is empty!" << endl;
    }
    return 0;
}