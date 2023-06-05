#include<iostream>

using namespace std;

int main()
{
    string s1 = "nincompoop";

    s1.erase(3, 2); //from 3rd character upto 2 characters

    cout << s1 << endl;
    return 0;
}