#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Queue{
    int front,rear,capacity;
    int* queue;
    Queue(int c)
    {
        front=rear=0;
        capacity=c;
        queue=new int;
    }

    ~Queue() {delete[] queue;}

    //Insertion of element
    //Insertion in always done at rear in queue

    void enqueue(int data)
    {
        //Check if queue is full or not
        if(capacity==rear)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        //Otherwise insert in thr array
        else{
            queue[rear]=data;
            rear++;
        }
        return;
    }


    //For removal of element 
    //It will done from the front ex as in medical lines
    void dequeue()
    {
        //Check if queue is empty
        if(front== rear)
        {
            cout<<"Queue is empty"<<endl;
        }

        //Delete the element from front as
        else
        {
            for(int i=0;i<rear-1;i++){
                cout<<"Removed element is "<<queue[0]<<endl;
                queue[i]=queue[i+1];
            }
            //rear ka decrement;
            rear--;
        }
        return;
    }

    void display(){
        if(front==rear)
        {
            cout<<"Queue empty"<<endl;
            return;
        }

        for(int i=front;i<rear;i++)
        {
            cout<<"<-- "<<queue[i];
        }
        cout<<endl;

        return;
    }

    void frontElement()
    {
        if(front==rear){
            cout<<"Queue is emptyy"<<endl;
            return;
        }

        cout<<"Front == "<<queue[front];
        return;
    }

};

int main()
{
    //We can pass object as a argument in function deckaration
    Queue q(4);

    //Print
    q.display();

    //Insering the element
    q.enqueue(4);
    q.enqueue(6);
    q.enqueue(8);
    q.enqueue(10);

    q.display();

    //Now removing some elements

    q.dequeue();
    q.dequeue();
    
    q.display();


    
    return 0;
}