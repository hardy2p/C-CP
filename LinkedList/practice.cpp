#include<iostream>
using namespace std;

class ListNode{
    public:
       int data;
       ListNode* next;//Pointer storing the address of the next node.
    ListNode(int data)
    {
        this->data=data;
        this->next= NULL;
    }
};

void insertAtHead(ListNode* &head,int data)
{
    ListNode* temp = new ListNode(data);//created a new node named temp
    temp->next= head;
    head=temp;
}

void insertAtEnd(ListNode* &tail,int data)
{
    ListNode* temp= new ListNode(data);
    tail->next=temp;
    tail=temp;
}

void print(ListNode* &head)
{
    ListNode* temp= head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

int main()
{
    ListNode* node1=new ListNode(4);
    //Decalring head and tail as too this new node

    ListNode* head= node1;
    ListNode *tail= node1;

    print(head);
    insertAtHead(head,45);
    insertAtHead(head,55);
    insertAtHead(head,65);
    print(head);

    insertAtEnd(tail,80);
    insertAtEnd(tail,75);

    print(head);
    
    return 0;
}