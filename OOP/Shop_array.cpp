#include<iostream>

using namespace std;

class Shop {
    int itemId[100];
    float itemPrice[100];
    int counter;
    void setPrice();
    public:
        int itemNo = 0;
        string name;
        void initCounter(void) {counter = 0;}
        void getPrice();
        void display();
};

void Shop :: getPrice(){
    for (int i = 0; i < itemNo; i++)
    {
        cout << endl;
        cout << "Enter ID of '" << name << "' item No. " << i + 1 << ": ";
        cin >> itemId[counter];
        cout << "Enter price of '" << name << "' item ID. " << itemId[counter] << ": ";
        cin >> itemPrice[counter];
        counter ++;
    }
    cout << endl;
}

void Shop :: setPrice(){
    for (int i = 0; i < counter; i++)
    {
        itemPrice[i] += (itemPrice[i] * 0.15);
    }
}

void Shop :: display(){
    setPrice();
    for (int i = 0; i < counter; i++)
    {
        cout << "Selling price of '" << name << "' item No. " << itemId[i] 
        << " is: " << itemPrice[i] << endl;
    }
    cout << endl;
}

int main()
{
    Shop dukan[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the name of the shop: ";
        cin >> dukan[i].name;
        cout << "How many items are there in '" << dukan[i].name << "' : ";
        cin >> dukan[i].itemNo;
        cout << endl;
        dukan[i].initCounter();
        dukan[i].getPrice();
        dukan[i].display();
    }
    
    return 0;
}