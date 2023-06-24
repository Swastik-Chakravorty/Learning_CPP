#include<iostream>

using namespace std;

class Human {
    protected:
        int height;
        int weight;
        int age;

    protected:
        int getAge(){
            return this -> age;
        }

        void setWeight(int w){
            this -> weight = w;
        }
};

//protected to public ==>> PROTECTED
/*class Male : public Human {
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

    // cout << object1.age << endl; // cannot access directly

    cout << object1.getAge() << endl; // cannot access directly
    cout << object1.getWeight() << endl; // cannot access directly
    cout << object1.getHeight() << endl; // cannot access directly

    cout << object1.color << endl;
    object1.sleep();

    object1.setWeight(84);
    cout << object1.getWeight() << endl;

    return 0;
}*/

//protected to protected ==>> PROTECTED
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

    // cout << object1.age << endl; // cannot access directly

    cout << object1.getAge() << endl; // cannot access directly
    cout << object1.getWeight() << endl; // cannot access directly
    cout << object1.getHeight() << endl; // cannot access directly

    cout << object1.color << endl;
    object1.sleep();

    object1.setWeight(84);
    cout << object1.getWeight() << endl;

    return 0;
}*/

//protected to private ==>> PRIVATE
class Male : private Human {
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

    // cout << object1.age << endl; // cannot access directly

    cout << object1.getAge() << endl; // cannot access directly
    cout << object1.getWeight() << endl; // cannot access directly
    cout << object1.getHeight() << endl; // cannot access directly

    cout << object1.color << endl;
    object1.sleep();

    object1.setWeight(84);
    cout << object1.getWeight() << endl;

    return 0;
}