#include<iostream>

using namespace std;

class Hero {
    
    private:
    int health;

    public:
    char level;

    //default(without arguments and without any functionality function) / simple Constructor
    Hero(){
        cout << "Default / Simple Constructor called" << endl;
    }

    //parameterised constructor
    Hero(int health)
    {
        // cout << "this ->" << this << endl;
        this -> health = health; 
        //assining 'argument health', i.e. "this"(ramesh) 'health' to class private health
    }

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    //Copy Constructor
    Hero(Hero &temp)
    {
        this -> health = temp.health;
        //this (predefined suresh health) to R(temp) health
        this -> level = temp.level;
    }

    void print(){
        cout << "Health: " << this -> health << endl;
        cout << "Level: " << this -> level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main()
{
    //copy constructor
    // Hero suresh;
    // suresh.setHealth(70);
    // suresh.setLevel('C');

    //Short way
    Hero suresh(70, 'C');
    suresh.print();

    //"Copy Constructor"
    Hero R(suresh); // Like--> R.health = suresh.health & R.level = suresh.level
    R.print();

    //Object created statically
    Hero ramesh(10);
    // cout << "Address of Ramesh: " << &ramesh << endl;
    // ramesh.getHealth();
    ramesh.print();

    //Dynamically
    Hero *h = new Hero(11);
    h -> print();

    //function overloading
    Hero temp(22, 'B');
    temp.print();

    return 0;
}