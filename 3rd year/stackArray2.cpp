#include<iostream>
using namespace std;
class Stack{
    public:
          int size;
          int* arr;
          int top;
     Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
     }

     void push(int val){
        if(top>=size-1){
            cout<<"Stack overflow"<<endl;
        }else{
            top++;
            cout<<"Item inserted"<<endl;
            arr[top]=val;
        }
     }

     void pop(){
        if(top<=-1){
            cout<<"Stack underflow"<<endl;
        }else{
            cout<<"Popped element is "<<arr[top];
            top--;
        }
     }

     void peek(){
        if(top>=0){
            cout<<"Top element is "<<arr[top];
        }
     }

     bool isEmpty(){
         if(top<=-1){
            return false;
         }else{
            return true;
         }
     }
};

int main()
{
    Stack s1(4);
    s1.push(4);
    s1.push(2);
    s1.push(2);
    s1.push(6);
    s1.peek();
    return 0;
}