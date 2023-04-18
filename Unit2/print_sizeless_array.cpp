#include<iostream>

using namespace std;

int main()
{
    int scores [] {2,5,8,6,4,3,45,56,89,23,4};
    //this is the main expression
    /*int size = (sizeof(scores) / sizeof(scores[0]));
    cout << "scores size: " << size << endl;
    for (size_t i {0}; i < size; i++)
    {
        cout << "score[" << i << "] is: " << scores[i] << endl;
    }*/

    //this is the shortcut
    for (auto score : scores)
    {
        cout << "score is: " << score << endl;
    }
    return 0;
}