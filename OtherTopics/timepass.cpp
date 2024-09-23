#include<iostream>
using namespace std;
class complex{
    int real,img,power;
    public:
        complex(int power)
        {
            this->power=power;//this keyword is also a pointer pointing to current member class of power 
            //so as we use -> (arrow) opeator to access the pointer type object we also use arrow here to use this access this keyword as this is also a pointer
        }
        void getData()
        {
            cout<<"Real part is "<<this->real<<endl;;
            cout<<"Imag part is "<<this->img<<endl;
        }

        void setData(int a,int b)
        {
            real=a;
            img=b;
        }
};
int main()
{
    complex c1(85);
    complex *ptr=&c1; //similar to int* ptr because integer is also an class
    c1.setData(1,45); //this is a dot operator which is normalyy used but not in case of pointer execution
    c1.getData();  

    (*ptr).setData(45,47);
    (*ptr).getData();

    //Dot operator is used in non pointer case but in case of pointer we use arrow operator
    //So to get rid of this paranthesis shit(as . operator has higher precendence than * operator) we us arrow operator
    ptr->setData(0,0);
    ptr->getData();

    //we can also directly use this 
    complex *p= new complex(5);//p is a pointer object which will store the address of p data
    p->setData(99,99);//Here dot operator will give us an error so we use this arrow operator
    p->getData();
    return 0;
}