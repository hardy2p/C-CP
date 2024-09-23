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

    void speak(){
        cout<<"Speaking"<<endl;
    }

    
};

class dog: public Animal{
    

};
int main()
{
    dog d1;
    d1.speak();
    return 0;
}