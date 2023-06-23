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

};

int Hero :: timeToComplete = 5;

int main()
{
    cout << Hero :: timeToComplete << endl; //ITS RECOMMENDED; belongs to class

    Hero a;
    cout << a.timeToComplete << endl; //****ITS NOT RECOMMENDED****

    cout << endl << endl;

    Hero b;
    b.timeToComplete = 10; //LOGICWISE RIGHT BUT****ITS NOT RECOMMENDED****

    cout << a.timeToComplete << endl; //LOGICWISE RIGHT BUT****ITS NOT RECOMMENDED****
    cout << b.timeToComplete << endl; //LOGICWISE RIGHT BUT****ITS NOT RECOMMENDED****

    return 0;
}