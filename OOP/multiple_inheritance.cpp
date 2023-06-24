#include<iostream>

using namespace std;

class Animal {
    public:
        int age = 15;
        int weight;

    public:
        void bark(){
            cout << "Barking" << endl;
        }
};

class Human{
    public:
        string color = "Blue";

    public:
        void speak(){
            cout << "Speaking" << endl;
        }
};

//Multiple inheritance
class alien : public Animal, public Human{

};

int main()
{
    alien obj1;
    obj1.speak();
    obj1.bark();
    cout << obj1.age << endl;
    cout << obj1.color << endl;

    return 0;
}