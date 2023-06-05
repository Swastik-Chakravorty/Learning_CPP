#include<iostream>

using namespace std;

int main()
{
    string s1 = "nincompoop";

    s1.insert(2, "lol"); //2 is position & "lol" is inserting word

    cout << s1 << endl;
    return 0;
}