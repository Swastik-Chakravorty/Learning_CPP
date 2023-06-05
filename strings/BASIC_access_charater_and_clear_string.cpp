#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str = "Swastik";
    cout << str[2] << endl; //to access 3rd charater like array, i.e. a

    //to clear a string
    string str1 = "My sister is Swagata Chakravorty";
    str1.clear();
    cout << str1;

    return 0;
}