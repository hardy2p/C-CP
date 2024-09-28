#include<iostream>
using namespace std;


class myQueue{
    int* arr;
    int front;
    int rear;
    int size;

    public:
    //Constructor
     myQueue(int size){
        this->size=size;
        arr=new int[size];
        front =0;
        rear=0;
    }

    void enQueue(int val){
        if(isFull()){
            cout<<"Queue is Full"<<endl;
            return;
        }else{
            arr[rear]=val;
            rear++;
        }
    }

    void deQueue(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return;
        }else{
            arr[front]=INT_MIN;
            front++;
        }
        if(front == rear){
            front=0;
            rear=0;
        }
    }
    bool isEmpty(){
        return rear==front;
    }

    bool isFull(){
        return rear==size;
    }

    int frontVal(){
        if(isEmpty()){
            cout<<"Empty queue"<<endl;
            return INT_MIN;
        }else{
            return arr[front];
        }
    }

    int length(){
        return rear-front;
    }

};
int main()
{
    myQueue q(5);
    q.enQueue(5);
    q.enQueue(4);
    q.enQueue(3);
    q.enQueue(2);

    cout<<q.length()<<endl;
    cout<<q.frontVal()<<endl;
    return 0;
}