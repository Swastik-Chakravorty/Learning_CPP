#include<iostream>

using namespace std;

class A{
    public:
        int a;
        int b;

    public:
        int add(){
            return (a + b);
        }

        void operator+ (A &obj){ //we can take A type object value only also, but here we take reference
            int currentObject = this -> a; //current object obj1
            int inputObject = obj.a; // here obj will be th obj2

            cout << "Output: " << (inputObject - currentObject) << endl;
            cout << "Welcome to OOP Polymorphism" << endl;
        }

        void operator() (){
            cout << "This is first bracket in math: " << this -> a << endl; 
        }
};

int main()
{
    A obj1, obj2;
    obj1.a = 3;
    obj1.b = 7;
    cout << obj1.add() << endl;

    obj2.a = 15;

    obj1 + obj2;

    obj2() ;

    return 0;
}