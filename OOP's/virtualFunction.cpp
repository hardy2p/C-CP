#include<iostream>
using namespace std;

//Virtual functions:-
//Are those fuctions which are supoosed to be redeclared in the child class to exhibit runtime polymorphism

class parent{
    public:
   virtual void func(){
        cout<<"Parent class function."<<endl;
    }
};

class child : public parent{
    public:
    void func(){
        cout<<"Child class function."<<endl;
    }
};
int main()
{
    parent* p1=new child;
    (*p1).func();
    p1->func();
    p1->parent::func();//To acces the parent class function.
    delete p1;
    return 0;
}