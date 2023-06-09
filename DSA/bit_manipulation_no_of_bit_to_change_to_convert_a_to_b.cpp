#include<iostream>

using namespace std;

int main()
{
    int a = 22;
    int b = 27;
    //to get the total number of 1's
    a = a ^ b;
    //now to count how many 1's or setbits are there in 'a'
    int count = 0;

    //newbie way --->>
    // while (a != 0)
    // {
    //     if ((a & 1) != 0)
    //         count++;
    //     a >>= 1;
    //     cout << a << " "; //to see how many steps (as many bits in the number)
    // }
    // cout << endl;

    //Optimised way
    while (a != 0)
    {
        a = a & (a - 1);
        count++;
    }

    cout << "Total " << count << " bits have to be changed" << endl;
    return 0;
}