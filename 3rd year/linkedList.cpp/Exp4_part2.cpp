#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
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
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtStart() {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete from an empty list." << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }

    void deleteAtEnd() {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete from an empty list." <<endl;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        if (tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr;
        }
        delete temp;
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

class CircularLinkedList {
private:
    Node* head;
    Node* tail;

public:
    CircularLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertAtStart(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
            newNode->next = newNode;
            newNode->prev = newNode;
        } else {
            newNode->next = head;
            newNode->prev = tail;
            head->prev = newNode;
            tail->next = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
            newNode->next = newNode;
            newNode->prev = newNode;
        } else {
            newNode->next = head;
            newNode->prev = tail;
            head->prev = newNode;
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
        tail->next = head;
        head->prev = tail;
        delete temp;
    }

    void deleteAtEnd() {
        if (head == nullptr) {
            std::cout << "List is empty. Cannot delete from an empty list." << std::endl;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        delete temp;
    }

    void display() {
        if (head == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        Node* current = head;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }
};

int main() {
    cout<<"Pushpendra singh"<<endl;
    cout<<"UID :- 20BCS4137"<<endl;
    DoublyLinkedList doublyList;
    doublyList.insertAtStart(3);
    doublyList.insertAtStart(2);
    doublyList.insertAtStart(1);
    doublyList.display();

    doublyList.insertAtEnd(4);
    doublyList.insertAtEnd(5);
    doublyList.display();

    doublyList.deleteAtStart();
    doublyList.display();

    doublyList.deleteAtEnd();
    doublyList.display();

    CircularLinkedList circularList;

    circularList.insertAtStart(3);
    circularList.insertAtStart(2);
    circularList.insertAtStart(1);
    circularList.display();

    circularList.insertAtEnd(4);
    circularList.insertAtEnd(5);
    circularList.display();

    circularList.deleteAtStart();
    circularList.display();

    circularList.deleteAtEnd();
    circularList.display();

    return 0;
}
