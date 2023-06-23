#include<iostream>

using namespace std;

class Student {
    private:
        string name;
        int age = 10;
        int height;

    public:
        int getAge(){
            return this -> age;
        }
};

int main()
{
    Student first;

    cout << first.getAge() << endl;

    return 0;
}