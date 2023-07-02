#include<iostream>

using namespace std;

//Forward declaration
class Complex;

class Calculate{
    public:
        int add(int x, int y){
            return x + y;
        }

        int sumRealComplex(Complex, Complex);
        int sumComComplex(Complex, Complex);
};

class Complex{
    int a, b;

    //Individually declaring functions as friends
    // friend int Calculate :: sumRealComplex(Complex o1, Complex o2);
    // friend int Calculate :: sumComComplex(Complex o1, Complex o2);

    //Aliter: Declaring the entire Calculate class as friend
    friend class Calculate;

    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNumber(){
            cout << "Complex number is: " << a << " + " << b << "i" << endl;
        }
};

int Calculate :: sumRealComplex(Complex o1, Complex o2){
            return (o1.a + o2.a);
        }

int Calculate :: sumComComplex(Complex o1, Complex o2){
            return (o1.b + o2.b);
        }

int main()
{
    Complex c1, c2;
    c1.setNumber(1, 3);
    c1.printNumber();

    c2.setNumber(3, 5);
    c2.printNumber();

    Calculate cal;
    cout << "Sum of a: " << cal.sumRealComplex(c1, c2) << endl;
    cout << "Sum of b: " << cal.sumComComplex(c1, c2) << "i" << endl;
    return 0;
}