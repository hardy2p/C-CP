#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

template <typename T>
class Stack {
private:
    T data[100];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }
    //here
      bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == 100 - 1;
    }
    void push(T element) {
        if (isFull()) {
            cout << "Stack is full" <<endl;
            return;
        }
        topIndex++;
        data[topIndex] = element;
    }

    void pop() {
        if (isEmpty()) {
           cout << "Stack is empty" <<endl;
            return;
        }
        T element = data[topIndex];
        topIndex--;
        cout << element << " popped from stack." <<endl;
    }

    T top() {
        if (isEmpty()) {
            cout << "Stack is empty." <<endl;
            return T();
        }
        return data[topIndex];
    }
};

int main() {
    Stack<int> intStack;
    cout <<(intStack.isEmpty() ? " Stack is empty" : "Stack is not empty ") <<endl;
    
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    cout << "Is stack empty? " << (intStack.isEmpty() ? "Yes" : "No") <<endl;
    cout << "Is stack full? " << (intStack.isFull() ? "Yes" : "No") << endl;
    cout << "Top element: " << intStack.top() <<endl;

    intStack.pop();
    intStack.pop();
    intStack.pop();

    cout << "Is stack empty? " << (intStack.isEmpty() ? "Yes" : "No") <<endl;

    return 0;
}