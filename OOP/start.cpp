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
    Hero ramesh;

    cout << "Size of Ramesh is: " << sizeof(ramesh) << endl;

    //using set-ter
    ramesh.setHealth(70);

    cout << "Ramesh health is: " << ramesh.getHealth() << endl;
    // ramesh.health = 70;
    ramesh.level = 'A';

    // cout << "Health is: " << ramesh.health << endl;
    cout << "Level is: " << ramesh.level << endl;

    return 0;
}