#include<iostream>

using namespace std;

class Human {
    public:
        int height;
        int weight;
        int age;

    public:
        int getAge(){
            return this -> age;
        }

        void setWeight(int w){
            this -> weight = w;
        }
};

//Public public mode ==>> PUBLIC
/*class Male : public Human {
    public:
        string color;

        void sleep(){
            cout << "Male sleeping" << endl;
        }
    
};

int main()
{
    Male object1;

    cout << object1.age << endl; // cannot access
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl;
    object1.sleep();

    object1.setWeight(84);
    cout << object1.weight << endl;

    return 0;
}*/

//public protected mode ==>> PROTECTED
/*class Male : protected Human {
    public:
        string color;

        void sleep(){
            cout << "Male sleeping" << endl;
        }

        int getHeight(){ //to access the height of parent class
            return this -> height;
        }

        int getAge(){
            return this -> age;
        }

        int getWeight(){
            return this -> weight;
        }

        void setWeight(int w){
            this -> weight = w;
        }
};

int main()
{
    Male object1;

    cout << object1.getAge() << endl; // cannot access directly
    cout << object1.getWeight() << endl; // cannot access directly
    cout << object1.getHeight() << endl; // cannot access directly

    cout << object1.color << endl;
    object1.sleep();

    object1.setWeight(84);
    cout << object1.getWeight() << endl;

    return 0;
}*/


//public private mode ==>> PRIVATE
class Male : protected Human {
    public:
        string color;

        void sleep(){
            cout << "Male sleeping" << endl;
        }

        int getHeight(){ //to access the height of parent class
            return this -> height;
        }

        int getAge(){
            return this -> age;
        }

        int getWeight(){
            return this -> weight;
        }

        void setWeight(int w){
            this -> weight = w;
        }
};

int main()
{
    Male object1;

    cout << object1.getAge() << endl; // cannot access directly
    cout << object1.getWeight() << endl; // cannot access directly
    cout << object1.getHeight() << endl; // cannot access directly

    cout << object1.color << endl;
    object1.sleep();

    object1.setWeight(84);
    cout << object1.getWeight() << endl;

    return 0;
}