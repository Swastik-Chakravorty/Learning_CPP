#include<iostream>

using namespace std;

class A{
    public:
        void funcA1(){
            cout << "Inside function 1" << endl;
        }
};
class B: public A{
    public:
        void funcBA2(){
            cout << "Inside function 2" << endl;
        }
};
class C: public A{
    public:
        void funcCA3(){
            cout << "Inside function 3" << endl;
        }
};
class D: public B{
    public:
        void funcDBA4(){
            cout << "Inside function 2" << endl;
        }
};
class E: public C{
    public:
        void funcECA5(){
            cout << "Inside function 3" << endl;
        }
};

int main()
{
    E obj1;
    obj1.funcA1();
    // obj1.funcBA2(); //this will be wrong as E not belongs to B tree
    obj1.funcCA3();

    D obj2;
    obj2.funcA1();
    obj2.funcBA2();
    // obj2.funcCA3(); //this will be wrong as D not belongs to C tree
    
    return 0;
}