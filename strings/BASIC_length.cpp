#include<iostream>

using namespace std;

int main()
{
    string s1 = "nincompoop";

    cout << s1.size() << endl;

                // or

    cout << s1.length() << endl;

    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << " ";
    }
    cout << endl;

    return 0;
}