#include<iostream>
#include<string>

using namespace std;

int main()
{
    //adding string or append

    string s1 = "fam";
    string s2 = "ily";

    s1.append(s2);
    cout << s1 << endl;
            //or
    cout << s1 + s2 << endl;
            //or
    s1 = s1 + s2;
    cout << s1 << endl;
    return 0;
}