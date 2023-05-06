#include<iostream>

using namespace std;

int main()
{
    int rs;
    int $ = 0;
    int wrap = 0;
    cout << "How much $ you have? ";
    cin >> rs;
    $ = rs;

    while ($ >= 3)
    {
        wrap += $ / 3;
        if (($ / 3) + ($ % 3) == 3)
        {
            wrap++;
        }
        $ /= 3;
    }

    cout << "Total chocolate you'll get: " << rs + wrap << endl;
    return 0;
}