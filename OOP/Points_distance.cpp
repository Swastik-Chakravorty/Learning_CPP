#include<iostream>
#include<cmath>

using namespace std;

class Points{
    int x, y;
    public:
        Points(int, int);
        
        friend int distance(Points, Points);

        void display(){
            cout << "Points are: ("<< x << ", " << y << ")" << endl;
        }
};

Points :: Points(int a, int b){
    x = a;
    y = b;
}

int distance(Points p1, Points p2){
    // int xAx = p2.x -p1.x;
    // int yAx = p2.y -p1.y;
    int res = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return res;
}

int main()
{
    Points p1(1, 0);
    Points p2(70, 0);
    p1.display();
    p2.display();

    cout << "Distance between two points is: " << distance(p1, p2) << endl;

    return 0;
}