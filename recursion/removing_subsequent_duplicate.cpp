#include<iostream>

using namespace std;

string dupliRem(string s)
{
    if (s.length() == 0)
        return "";
    
    char ch = s[0];
    string ans = dupliRem(s.substr(1));

    if (ch == ans[0])
        return ans;
    
    else
        return (ch + ans);
}

int main()
{
    cout << dupliRem("aaabbbcdddeee") << endl;

    return 0;
}