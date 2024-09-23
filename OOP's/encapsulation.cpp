#include<iostream>
using namespace std;
class Student {
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};
int main()
{
    //Encapsulation
    Student s1;
    cout<<s1.getAge()<<endl;
    return 0;
}