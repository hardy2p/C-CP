#include<bits/stdc++.h>
using namespace std;

class student{
    private:
    int id ;
    string name;
    public :
    student(int id){
        this->id=id;
    }
    student(int id,string name){
        this->id=id;
        this->name=name;
    }

    void getInfo(){
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    ~student(){
        cout<<"Destrcutor getting called"<<endl;
    }
};

//constructor can also be used in this case
int main()
{
    student s(4);
    student s1(5,"Rahul sharma");
    s.getInfo();
    s1.getInfo();

    student s2(s1);
    s2.getInfo();//Shallow copy for that we need to create a string copy
    return 0;
}