#include <bits/stdc++.h>
using namespace std;

class queueCircular
{
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    queueCircular(int k)
    {
        size = k;
        arr = new int[k];
        front = 0;
        rear = 0;
    }
    // ~queueCircular()
    // {
    //     delete[] arr;
    // }

    void enQueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        else
        {
            arr[rear] = val;
            rear = (rear + 1) % size;
        }
    }

    void deQueue()
    {
        if (isEmpty())
        {
            cout << "Empty queue" << endl;
            return;
        }
        else
        {
            arr[front] = INT_MIN;
            front = (front + 1) % size;
        }
    }

    bool isFull()
    {
        return (rear + 1) % size == front;
    }
    bool isEmpty()
    {
        return rear == front
    }

    int frontVal(){
        if(isEmpty()){
            return -1;
        }else{
            return arr[front];
        }
    }
};
int main()
{

    return 0;
}