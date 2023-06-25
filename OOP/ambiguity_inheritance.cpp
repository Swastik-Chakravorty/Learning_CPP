#include<iostream>

using namespace std;

class A{
    public:
        void func(){
            cout << "I'm in class A" << endl;
        }
};

class B{
    public:
        void func(){
            cout << "I'm in class B" << endl;
        }
};

class C: public A, public B{

};

int main()
{
    C obj;
    // obj.func(); // will be ambiguous
    obj.A :: func(); //right syntax for ambiguous
    obj.B :: func(); //right syntax for ambiguous
    return 0;
}