#include<iostream>
using namespace std;
class s{
    private:
    int a;
    protected:
    int b;

    public:
    s(int a,int b){
        this->a=a;
        this->b=b;
    }

    friend class f;
};

class f{
    public:
    void display(s& obj){
        cout<<"Value of private a "<<obj.a<<endl;
        cout<<"Value of protected b "<<obj.b<<endl;
    }
};

//Now friend function 

class c{
    private:
    int a;
    protected:
    int b;

    public:
    c(int a ,int b){
        this->a=a;
        this->b=b;
    }

    friend void func(c& obj);
};
void func(c& obj){
    cout<<"Private memeber "<<obj.a<<endl;
    cout<<"Protected memeber "<<obj.b<<endl;
}

int main()
{
    s obj(4,5);
    f temp;
    temp.display(obj);

    c obj1(4,2);
    func(obj1);
    return 0;
}