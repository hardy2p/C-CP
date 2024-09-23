#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
    static int TTL;

    Hero(){
        cout<<"Simple constructor called"<<endl;
    }

    Hero(int health){
        //this is a pointer here in which adrees of the health will be pointed
        cout<<"Address on this "<<this<<endl;
        this->health=health;
        //cout<<"Hello constructor called"<<endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel(){
        return level;
    }
    

    void setHealth(int h)
    {
        health=h;
    }
    void setLevel(char level)
    {
        //This is a pointer pointing to the address of the object.

        this->level=level;
    }

    ~Hero(){
        cout<<"Hello destructor called"<<endl;
    }
};

int Hero::TTL=15;

int main()
{

    //Padding is done to reduce the memory cycle .The compiler reads the data in size of maximum memory allocated to it.
    // Hero h;
    // Hero* a= new Hero();
    // delete a;

    cout<<Hero::TTL<endl;



}