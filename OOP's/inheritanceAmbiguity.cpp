#include<iostream>
using namespace std;
class A{
    int age;
    public:
    int getAge(){
        cout<<"From A"<<endl;
        return this->age;
    }

};

class B{
    int age;
    public:
    int getAge(){
        cout<<"From B"<<endl;
        return this->age;
    }
};

class C:public A,public B{

};
int main()
{
    C obj;
    obj.A::getAge();
    obj.B::getAge();
    return 0;
}