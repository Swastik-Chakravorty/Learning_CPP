#include<iostream>

using namespace std;

int main()
{
    //int score [] = {2,5,8,9,10,56};
    int score [] {2,5,8,9,10,56,9}; // same as above
    // int sum = 0;
    int sum {0}; // same as above

    // for (auto element : score) // can be used as auto / int / float / double....
    for (int element : score) // new for declaration for sizeless arrays
    {
        sum += element;
    }
    cout << "Total sum is: " << sum << endl;

    return 0;
}