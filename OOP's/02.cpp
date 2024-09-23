#include<iostream>
//#include"external.cpp"//Involving an external class in my class 

using namespace std;

class Hero{
    int health;
    char level;

    public:
    //Accessing private member outside the class via using functions 
    //We can not decalre function in provate also that will create a mess

    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

};

int main()
{
    Hero h1;  
    // h1.health=45;
    // cout<<h1.health<<endl;
    // external e1;
    // cout<<sizeof(e1)<<endl;
    // cout<<sizeof(h1)<<endl;
    cout<<h1.getHealth()<<endl;
    cout<<h1.getLevel()<<endl;

    return 0;
}