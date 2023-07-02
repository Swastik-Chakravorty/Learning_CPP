#include<iostream>

using namespace std;

class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }

    friend void add(X, Y);
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }

    friend void add(X, Y);
};

void add(X o1, Y o2){
    cout << "Sum of X data and Y num is: " << o1.data + o2.num << endl;
}

int main()
{
    X a;
    Y b;
    a.setValue(5);
    b.setValue(8);
    add(a, b);

    return 0;
}