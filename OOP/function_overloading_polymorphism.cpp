#include<iostream>

using namespace std;

class A{
    public:
        int func(){
            int a = 25;
            return a;
        }

        int func(int a){
            return (a * a);
        }

        int func(int a, int b){
            return (a * b);
        }
};

class B: public A{
    public:
        int x = 15;
        int y = 20;
};

int main()
{
    B obj;
    cout << obj.func() << endl;
    cout << obj.func(obj.x) << endl;
    cout << obj.func(obj.x, obj.y) << endl;
    return 0;
}