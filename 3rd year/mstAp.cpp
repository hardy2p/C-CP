#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *queue;//Pointer to point to store the adress of next element.
    int max_size;
    int front, rear;
    int current_size;

public:
    CircularQueue(int size) {
        max_size = size;
        queue = new int[max_size];
        front = rear = -1;
        current_size = 0;
    }

    //destructor
    ~CircularQueue() {
        delete[] queue;
    }

    //To check weather this empty or not
    bool is_empty() {
        return current_size == 0;
    }

    bool is_full() {
        return current_size == max_size;
    }

    void enqueue(int item) {
        if (is_full()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear = (rear + 1) % max_size;
        queue[rear] = item;
        current_size++;
        cout << "Enqueued: " << item << endl;
    }

    int dequeue() {
        if (is_empty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1;
        }

        int item = queue[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % max_size;

        current_size--;
        cout << "Dequeued: " << item << endl;
        return item;
    }

    int peek() {
        if (is_empty()) {
            cout << "Queue is empty. Cannot peek." << endl;
            return -1;
        }
        return queue[front];
    }

    int size() {
        return current_size;
    }

    void display() {
        if (is_empty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";
        if (front <= rear) {
            for (int i = front; i <= rear; i++)
                cout << queue[i] << " ";
        } else {
            for (int i = front; i < max_size; i++)
                cout << queue[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int max_capacity = 5;
    CircularQueue cq(max_capacity);

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);

    cq.display();

    cout << "Front element: " << cq.peek() << endl;

    cq.dequeue();
    cq.display();

    cq.enqueue(50);
    cq.display();

    return 0;
}
