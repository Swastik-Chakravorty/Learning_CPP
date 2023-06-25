#include<iostream>

using namespace std;

class Animal{
    public:
        void func(){
            cout << "Speaking" << endl;
        }
};

class Dog: public Animal{
    public:
        void func(){ //method overriding
            cout << "Barking" << endl;
        }
};

class Human: public Animal{

};

int main()
{
    Dog tommy;
    tommy.func(); //dynamic polymorphism

    Human ajit;
    ajit.func();

    return 0;
}