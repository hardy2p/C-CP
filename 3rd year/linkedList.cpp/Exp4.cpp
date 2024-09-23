#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertAtStart(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtStart() {
        if (head == nullptr) {
            std::cout << "List is empty. Cannot delete from an empty list." << std::endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (head == nullptr) {
            std::cout << "List is empty. Cannot delete from an empty list." << std::endl;
            return;
        }

        if (head == tail) {
            delete head;
            head = nullptr;
            tail = nullptr;
        } else {
            Node* current = head;
            while (current->next != tail) {
                current = current->next;
            }
            delete tail;
            tail = current;
            tail->next = nullptr;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    cout<<"Pushpendra singh"<<endl;
    cout<<"UID 20BCS4137"<<endl;
    LinkedList list;
    list.insertAtStart(3); 

    list.insertAtStart(2); 

    list.insertAtStart(1); 

    list.display(); 

    list.insertAtEnd(4); 

    list.insertAtEnd(5); 

    list.display(); 

    list.deleteAtStart(); 

    list.display(); 

    list.deleteAtEnd(); 

    list.display(); 

    return 0; 

} 