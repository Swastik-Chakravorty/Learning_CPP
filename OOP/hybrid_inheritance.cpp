#include<iostream>

using namespace std;

class A{
    public:
        void funcA1(){
            cout << "Inside function 1" << endl;
        }
};
class B: virtual public A{ //using virtual to remove ambiguity from obj3.funcA1()
    public:
        void funcBA2(){
            cout << "Inside function 2" << endl;
        }
};
class C: virtual public A{ //using virtual to remove ambiguity from obj3.funcA1()
    public:
        void funcCA3(){
            cout << "Inside function 3" << endl;
        }
};
class D: public B{
    public:
        void funcDBA4(){
            cout << "Inside function 4" << endl;
        }
};
class E: public C{
    public:
        void funcECA5(){
            cout << "Inside function 5" << endl;
        }
};
class F{
    public:
        void funcF6(){
            cout << "Inside function 6" << endl;
        }
};
class G: public D, public E, public F{
    public:
        void funcABCDEFG7(){
            cout << "Inside function 7" << endl;
        }
};

int main()
{
    E obj1;
    obj1.funcA1();
    obj1.funcCA3();
    cout << endl;

    D obj2;
    obj2.funcA1();
    obj2.funcBA2();
    cout << endl;

    G obj3;
    obj3.funcA1();
    obj3.funcBA2();
    obj3.funcCA3();
    obj3.funcDBA4();
    obj3.funcECA5();
    obj3.funcF6();
    obj3.funcABCDEFG7();

    
    return 0;
}