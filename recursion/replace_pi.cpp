#include<iostream>
#include<string>

using namespace std;

void replacingPi(string str)
{
    if (str.length() == 0)
        return;
    
    else if (str[0] == 'p' && str[1] == 'i')
    {
        cout << "3.14";
        replacingPi(str.substr(2));
    }

    else
    {
        cout << str[0];
        replacingPi(str.substr(1));
    }

}

int main()
{
    string word = "pippxxppixipi";
    replacingPi(word);
    cout << endl;
    return 0;
}