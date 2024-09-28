#include <bits/stdc++.h>
using namespace std;

class MyCircularQueue {
    int* arr;
    int front, rear, size;

public:
    MyCircularQueue(int k) {
        size = k+1;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        } else {
            arr[rear] = value;
            rear = (rear + 1) % size;
            return true;
        }
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        } else {
            front = (front + 1) % size;
            return true;
        }
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[front];
        }
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[(rear - 1 + size) % size];
        }
    }

    bool isEmpty() { return front == rear; }

    bool isFull() { return (rear + 1) % size == front; }
};


int main()
{

    return 0;
}