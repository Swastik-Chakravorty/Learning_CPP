#include<iostream>

using namespace std;

class Complex{
    int a, b;

    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        friend Complex sumComplex(Complex, Complex); 
        //friend functions are not member functions but allowed to do anything with private parts (members) of the class

        void printNumber(){
            cout << "Complex number is: " << a << " + " << b << "i" << endl;
        }
};

Complex sumComplex(Complex x, Complex y){
    Complex z;
    z.setNumber((x.a + y.a), (x.b + y.b));
    return z;
}

int main()
{
    Complex c1, c2;

    c1.setNumber(1, 4);
    c1.printNumber();
    // c1.sumComplex(c1, c2); //It is not possible, cause sunComplex isn't a member function

    c2.setNumber(5, 8);
    c2.printNumber();

    Complex sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/*Properties of friend function
1. Not in the scope of class

2. Since it is not in the scope of class, it cannot be called from the object of that class. c1.sumComplex() == invalid

3. Can be invoked without the help of any object

4. Usually contains the objects as the arguments

5. Can be declared inside public or private section of the class

6. It cannot access the members directly by their names 
and need object_name.member_name to access any member
*/