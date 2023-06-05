#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1 = "abc";
    string s2 = "abc";

    cout << s2.compare(s1) << endl; 
    // if (s2 > s1) --> s2.compare(s1) = + numbers
    // if (s2 < s1) --> s2.compare(s1) = - numbers
    // if (s2 == s1) --> s2.compare(s1) = 0

    if (s1.compare(s2) == 0)
    {
        cout << "String are equal!" << endl;
    }

    return 0;
}