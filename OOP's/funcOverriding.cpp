#include<iostream>
using namespace std;

class parent{
    public:
    virtual void func()
    {
        cout<<"Parent class"<<endl;
    }
};

class child : public parent {
    public:
    void func() override {
        cout<<"Child class"<<endl;
    }
};

int main()
{
    parent* p=new child;
    p->func();
    return 0;
}