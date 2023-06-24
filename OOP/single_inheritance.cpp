#include<iostream>

using namespace std;

class Animal {
    public:
        int age;
        int weight;

    public:
        void speak(){
            cout << "Speaking" << endl;
        }
};

class Dog : public Animal{

};

int main()
{
    Dog tomy;
    tomy.speak();
    cout << tomy.age << endl;

    return 0;
}