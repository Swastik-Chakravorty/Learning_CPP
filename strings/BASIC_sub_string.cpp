#include<iostream>

using namespace std;

int main()
{
    string s1 = "nincompoop";

    string sub = s1.substr(6, 4); //from position "6" upto "4" characters

    cout << sub << endl;
    return 0;
}