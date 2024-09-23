#include<iostream>
using namespace std;

class Animal{
    private:
    int age;
    int weight;

    public:
    int getWeight()
    {
        return this->weight;
    }

    void bark(){
        cout<<"Barking"<<endl;
    }

    
};

class Human{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};


class hybrid:public Animal ,public Human{

};
int main()
{
    hybrid h;
    h.speak();
    h.bark();
    return 0;
}