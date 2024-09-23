#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
#include <bits/stdc++.h>
using namespace std;
    int main()
    {
        int k;
        cin >> k;

        string ans = "A";
        int count = 0;
        while (count <= k)
        {
            string b = "";
            for (int i = 0; i < ans.size(); i++)
            {
                if (ans[i] == 'A')
                {
                    b += "B";
                }
                else
                {
                    b += "BA";
                }
            }
            ans = b;
            count++;
        }
        int a = 0, b = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            ans[i] == 'A' ? a++ : b++;
        }
        cout << a << " " << b;

        // Write your code here
    }
    // Constructor for creating a single node.
    Node(int value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void insertAtStart(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtStart()
    {
        if (head == nullptr)
        {
            cout << "List is empty. Cannot delete from an empty list." << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        else
        {
            tail = nullptr;
        }
        delete temp;
    }

    void deleteAtEnd()
    {
        if (head == nullptr)
        {
            cout << "List is empty. Cannot delete from an empty list." << endl;
            return;
        }

        Node *temp = tail;
        tail = tail->prev;
        if (tail != nullptr)
        {
            tail->next = nullptr;
        }
        else
        {
            head = nullptr;
        }
        delete temp;
    }

    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    cout << "Pushpendra singh" << endl;
    cout << "UID :- 20BCS4137" << endl;
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

    return 0;
}
