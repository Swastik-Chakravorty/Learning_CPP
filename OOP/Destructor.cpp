#include<iostream>
#include<cstring>

using namespace std;

class Hero {
    
    private:
    int health;

    public:
    char *name;
    char level;

    //default(without arguments and without any functionality function) / simple Constructor
    Hero(){
        cout << "Default / Simple Constructor called" << endl;
        name = new char[100];
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

    //Deep Copy Constructor
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        ch[strlen(temp.name) + 1] = '\0';
        this -> name = ch;

        this -> health = temp.health;
        //this (predefined suresh health) to R(temp) health
        this -> level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[ Name: " << this -> name << ",  ";
        cout << "Health: " << this -> health << ",  ";
        cout << "Level: " << this -> level << " ]";
        cout << endl << endl;
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

    void setName(char name[]){
        strcpy(this -> name, name);
    }

    //Destructor
    ~Hero(){
        cout << "Destructor is calling" << endl;
    }
};

int main()
{
    //static
    Hero a;

    //dynamic
    Hero *b = new Hero();
    delete b;

    return 0;
}