#include<iostream>

using namespace std;

void subSeq(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = str[0];
    int code = ch;
    string ros = str.substr(1);

    subSeq(ros, ans);
    subSeq(ros, (ans + ch));
    subSeq(ros, (ans + to_string(code)));
}

int main()
{
    subSeq("AB", "");
    cout << endl;
    return 0;
}