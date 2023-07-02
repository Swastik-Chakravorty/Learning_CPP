#include<iostream>

using namespace std;

class C2;

class C1{
    int val1;
    public:
        void setData(int x){
            val1 = x;
        }

        void display(){
            cout << "C1 value is: " << val1 << endl; 
        }

    friend void exchange(C1 &, C2 &);
};

class C2{
    int val2;
    public:
        void setData(int y){
            val2 = y;
        }

        void display(){
            cout << "C1 value is: " << val2 << endl; 
        }

    friend void exchange(C1 &, C2 &);
};

void exchange(C1 &a, C2 &b){
    int temp = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
}

int main()
{
    C1 x;
    C2 y;
    x.setData(5);
    x.display();

    y.setData(15);
    y.display();

    exchange(x, y);
    x.display();
    y.display();

    return 0;
}