#include<iostream>
using namespace std;
//Pass by value 

void update(int n){
    n++;
}

//Pass by refrence 

void newUpdate(int& n){
    n++;
    //Here a refrenence varaible is created and passed as a argument now this n will be a refrence variable and pointing to the same address as j.
}
int main(){
    /*
    int i=5;
    int &j=i;//Creating a refrece varible named j which is also pointing to the same address as i.
    cout<<i<<endl;
    cout<<j<<endl;

    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    i++;
    cout<<i<<endl;
    cout<<j<<endl;
    */

    int n=8;
    //Pass by value in this a new memory will be created and allocated to the variable that has been created in the update function.
    //Copy of the this argument will create a new memory.
    cout<<"Before n "<<n<<endl;
    update(n);
    cout<<"After n "<<n<<endl;

    //Pass by refrence 1)No new memory created and use of the refrence variable.
    int j=9;
    cout<<"Before j "<<j<<endl;
    newUpdate(j);
    cout<<"After j "<<j<<endl;

    return 0;
}