#include<iostream>

using namespace std;

void print(int result, char c);
void operation(int a, int b, char c);

int main()
{
    int a, b;
    char op;
    cout << "Choice for (add(+), subtract(-), multiply(x), devide(/), modulo(%) and power(^)): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    operation(a, b, op);
    return 0;
}

void operation(int a, int b, char c)
{
    int result = 0;
    switch (c)
    {
        case '+':
            result = a + b;
            print(result, c);
            break;
        case '-':
            result = a - b;
            print(result, c);
            break;
        case 'x':
            result = a * b;
            print(result, c);
            break;
        case '/':
            result = a / b;
            print(result, c);
            break;
        case '%':
            result = a % b;
            print(result, c);
            break;
        case '^':
            result = a;
            for (int i = 0; i < (b - 1); i++)
            {
                result *= a;
            }
            print(result, c);
            break;
    }
}

void print(int result, char c)
{
    switch (c)
    {
        case '+':
            cout << "Sum is: " << result << endl;
            break;
        case '-':
            cout << "Subtraction is: " << result << endl;
            break;
        case 'x':
            cout << "Multiplication is: " << result << endl;
            break;
        case '/':
            cout << "Quotient is: " << result << endl;
            break;
        case '%':
            cout << "Modulo is: " << result << endl;
            break;
        case '^':
            cout << "Power result is: " << result << endl;
            break;
    }
}