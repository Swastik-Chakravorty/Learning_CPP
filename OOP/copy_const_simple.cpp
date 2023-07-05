#include<iostream>

using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }

        //IT'S A DEFAULT CONSTRUCTOR
        Number(Number &obj){
            cout << "Copy constructor called" << endl;
            a = obj.a;
        }

        void display(){
            cout << "Value is: " << a << endl;
        }
};

int main()
{
    Number n1, n2, n3(45), n4(n3), n5; //copied done when we call it AND COPY CONSTRUCTOR IS A DEFAULT CONSTRUCTOR, SO WITHOUT DEFINING IT WE CAN USE IT
    n1.display();
    n2.display();
    n3.display();
    n4.display(); //displayed later
    n5 = n3; //copy constructor not called but value will be assigned
    n5.display();
    Number n6 = n3; // copy constructor called
    n6.display();
    return 0;
}