#include<iostream>
#include<string>
#include<algorithm> //to use transform

using namespace std;

int main()
{
    string str = "ads jkh *fsd";
    cout << 'a' - 'A' << endl;

    //converting into uppercase
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        cout << str[i];
    }
    cout << endl;

    //now converting into lowercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        cout << str[i];
    }
    cout << endl;


    //***lowercase & uppercase using "transform" function***
    
    string s1 = "My name is Swastik!";
    cout << s1 << endl;

    //converting to upper case
    transform(s1.begin(), s1.end(), s1.begin(), :: toupper); //by algorithm libray
    cout << s1 << endl;

    //converting to lower case
    transform(s1.begin(), s1.end(), s1.begin(), :: tolower); //algorithm libray
    cout << s1 << endl;

    return 0;
}