#include<iostream>
#include<cstring>

using namespace std;

class Hero {
    
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

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

    static int random(){
    return timeToComplete; //Only can use static memebers / variables
    }

};

int Hero :: timeToComplete = 5;

int main()
{
    cout << Hero :: random() << endl;

    return 0;
}