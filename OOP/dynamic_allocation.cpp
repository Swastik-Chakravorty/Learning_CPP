#include<iostream>

using namespace std;

class Hero {
    
    //properties
    private:
    int health;

    public:
    char level;

    //Functions
    void print(){ //no arguments
        cout << level << endl;
    }

    //get-ter - set-ter

    //using get-ter -- to fetch / read
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    //set-ter to modify / manipulate / function
    void setHealth(int h/*, char pswd*/){

        // if (pswd == 'A')
        // {
            health = h;
        // }
        
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main()
{
    //Static allocation
    Hero a;

    a.setHealth(80);
    a.setLevel('A');
    cout << "Level is: " << a.level << endl;
    cout << "Health is: " << a.getHealth() << endl;

    //dynamically allocation
    Hero *b = new Hero;

    b->setHealth(70);
    b->setLevel('B');
    cout << "Level is: " << (*b).level << endl; 
    //b is address & *b dereferencing the address and get the value
    cout << "Health is: " << (*b).getHealth() << endl;

    //we can use b-> also instead of (*b). "->" (arrow) operator
    cout << "Level is: " << b->level << endl;
    cout << "Health is: " << b->getHealth() << endl;

    return 0;
}