#include<iostream>
using namespace std;

class vector{
    int* arr;
    int size;
    public:
        //Declaring a constructor
        vector(int m){
            size=m;
            arr=new int[size];
        }
    vector dotProduct(vector &v){
        int d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];
        }
            return d;
    }
}

int main()
{
    // cout<<"Hello";
    vector v1(3);
    v1.arr[0]=8;
    v1.arr[1]=7;
    v1.arr[2]=5;

    vector v2(3);

    v2.arr[0]=8;
    v2.arr[1]=7;
    v2.arr[2]=5;

    cout <<v1.dotProduct(v2);


    
    return 0;
}