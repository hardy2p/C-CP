#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        data=d;
        this->next=NULL;
    }
};

void insertNode(Node* &tail,int element,int d)
{
    if(tail==NULL)
    {
        Node* newNode= new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }else{
        Node* curr= tail;
        while(curr->data != element)
        {
            curr=curr->next;
        }

        //No curr repesent the element wala node
        Node* temp = new Node(d);
        temp->next= curr->next;
        curr->next=temp;
    }
}

void print(Node* tail)
{
    Node* temp= tail;
    while(temp->next != tail)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main()
{
    Node* tail=NULL;
    insertNode(tail,45,8);
    print(tail);
    return 0;
}