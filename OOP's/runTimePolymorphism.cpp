#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};



int main()
{
    //This is also know as function overiding
    Dog d;
    d.speak();
    return 0;
}