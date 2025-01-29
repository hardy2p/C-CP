#include<bits/stdc++.h>
using namespace std;

class abstractClass{
    int data;
    string name;
    public:
    abstractClass(int data,string name){
        this->data=data;
        this->name=name;
    }
    void getInfo(){
        cout << "Data: " << data << ", Name: " << name << endl;
    }
    //Pure virtual function
    virtual void func()=0;
};

class baseClass : public abstractClass{
    int temp;
    public:
    baseClass(string name, int data, int temp) : abstractClass(data, name) {
        this->temp = temp;
    }

    void func() override {
        cout << "Pure virtual function implemented in baseClass. Temp: " << temp << endl;
    }
};


int main()
{
    baseClass b("Pushpendra", 4,5);
    b.getInfo();
    return 0;
}
