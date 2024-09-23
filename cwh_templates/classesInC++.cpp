#include<iostream>
using namespace std;

class employeData{
public:
    string name;
    int age;
    int id;
    //there is no return type to the constructor
    employeData(){
        cout<<"This is a default constructor "<<endl;
    }
    //Declaring function inside the class
    void show(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
    //declaring function outside the class
    void printId();
};

void employeData :: printId(){
    cout<<"Id of employe "<<id<<endl;
}


int main()
{
    //When a class is declared no memory is used upto that point but as we declare the object the memory is allocated.
    employeData pushpa;
    pushpa.name="Pushpendra";
    pushpa.age=78;
    pushpa.id=45;

    pushpa.show();
    pushpa.printId();


    return 0;
}
//there is something called destructor in c++ which is called when the scope of the varaible ends
