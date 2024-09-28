#include<bits/stdc++.h>
using namespace std;

class MyCircularDeque {
    vector<int> deq;
    int front, size, cnt, rear;
public:
    MyCircularDeque(int k) {
        size = k;
        deq = vector<int>(size, 0);
        front = 0;
        rear = 1;
        cnt = 0;
    }

    bool insertFront(int value) {
        if (isFull()) {
            return false;
        } else {
            deq[front] = value;
            front = (front - 1 + size) % size;
            cnt++;
            return true;
        }
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        } else {
            deq[rear] = value;
            rear = (rear + 1) % size;
            cnt++;
            return true;
        }
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        } else {
            front = (front + 1) % size;
            cnt--;
            return true;
        }
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;
        } else {
            rear = (rear - 1 + size) % size;
            cnt--;
            return true;
        }
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        } else {
            return deq[(front + 1) % size];
        }
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        } else {
            int idx = (rear - 1 + size) % size;
            return deq[idx];
        }
    }

    bool isEmpty() {
        return cnt == 0;
    }

    bool isFull() {
        return cnt == size;
    }
};


int main()
{
   MyCircularDeque q(10);
   q.insertFront(10);
   q.insertFront(5);
   q.insertFront(15);
   q.insertFront(20);
   q.insertFront(45);

   cout<<q.getFront()<<endl;   
    return 0;
}