#include<bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node* next;
public:
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class myQueue {
    int size;
    Node* start;
    Node* end;
public:
    myQueue() {
        this->size = 0;
        this->start = NULL;
        this->end = NULL;
    }

    void push(int num) {
        Node* temp = new Node(num);
        if (start == NULL) {
            start = temp;
            end = temp;
        } else {
            end->next = temp;
            end = temp;  // Update 'end' to point to the new node
        }
        size++;
    }

    void pop() {
        if (start == NULL) return;  // Check if the queue is empty
        Node* temp = start;
        start = start->next;
        delete temp;
        size--;
        
        if (start == NULL) {  // If queue becomes empty, reset 'end' to NULL
            end = NULL;
        }
    }

    int top() {
        if (start == NULL) {
            return -1;  // Indicate an empty queue
        }
        return start->data;
    }

    bool isEmpty() {
        return size == 0;
    }

    int getSize() {
        return size;
    }
};

int main()
{
    
    return 0;
}