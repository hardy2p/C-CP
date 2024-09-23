#include<iostream>
using namespace std;
class Human
{
    public:
    int age;
    int height;
    int weight;

    public:
    int getAge(){
        return this->age;      
    }

    void setWeight(int weight)
    {
        this->weight=weight;
    }

   


};


class Male:private Human{
    public:
    string color;

    void sleep()
    {
        cout<<"Male sleeping"<<endl;
    }
     int getHeight(){
        return this->height;
    }

    
};
int main()
{
    Male m1;
    cout<<m1.getHeight()<<endl;
    m1.sleep();

    return 0;
}