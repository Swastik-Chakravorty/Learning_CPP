#include<iostream>

using namespace std;

int main()
{
    int marks[4];
    cout << "Enter the marks: ";
    for (int i = 0; i < 4; i++)
    {
        cin >> marks[i];
    }
    cout << endl;
    int* p = marks; //initializing p's value as address of marks[0];

    cout << *(p++) << endl;
    cout << *p << endl;
    cout << *(++p) << endl;

    //as p already increased by 2
    cout << "The value of marks[2] is: " << *p << endl; //*p for value in marks[2]
    cout << "The value of marks[3] is: " << *(p + 1) << endl; //dereferencing

    return 0;
}