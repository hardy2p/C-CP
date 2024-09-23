#include<iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"Hello"<<endl;
    }

    int sayHello(string name){
        cout<<"Hello "<<name<<endl;
        return 1;
    }
};
int main()
{
    A obj;
    obj.sayHello();
    obj.sayHello("Pushpendra");
    return 0;
}