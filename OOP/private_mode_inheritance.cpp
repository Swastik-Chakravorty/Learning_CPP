#include<iostream>

using namespace std;

class Human {
    private:
        int height;
        int weight;
        int age;

    // private: //removing it to run the code at last
    public:
        int getAge(){
            return this -> age;
        }
        int getWeight(){
            return this -> weight;
        }
        int getHeight(){
            return this -> height;
        }

        void setWeight(int w){
            this -> weight = w;
        }
        void setHeight(int h){
            this -> height = h;
        }
        void setAge(int a){
            this -> age = a;
        }
};

//private to public ==>> NOT ACCESSABLE
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

//private to protected ==>> NOT ACCESSABLE
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

//private to private ==>> NOT ACCESSABLE
/*class Male : private Human {
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

int main()
{
    Human object1;

    cout << object1.getAge() << endl; // cannot access directly
    cout << object1.getWeight() << endl; // cannot access directly
    cout << object1.getHeight() << endl; // cannot access directly

    object1.setWeight(84);
    cout << object1.getWeight() << endl;

    return 0;
}