#include<iostream>
#include<string>

using namespace std;

void reverse(string str)
{
    if (str.length() == 0)
        return;

    reverse(str.substr(1));

    cout << str[0];
}

int main()
{
    string name = "Swastik";
    reverse(name);
    cout << endl;
    return 0;
}