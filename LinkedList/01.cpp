#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;//Next pointer will be pointing to the next node thats why we are using Node as (int* ptr (In that case ptr is pointer storing the address of the integeer datatype location))

        //constructor
        Node(int data)
        {
            this->data=data;
            this->next=NULL;
        }

        //Destructor
        ~Node()
        {
            int value=this->data;
            if(this->next != NULL)
            {
                delete next;//Deleting that pointer from heap which was pointing to some another node
                this->next= NULL;
            }
            cout<<"Memory is set to be free for "<<value<<endl;
        }

};

//Insertion at start(head)

void insertionAtStart(Node* &head,int d)
{
    Node* temp=new Node(d);//Created a new node named temp
    temp->next=head;
    head=temp;
}

//Insertion at end (tail)
void insertionAtEnd(Node* &tail,int d)
{
    Node* temp= new Node(d);
    tail->next=temp;
    tail=tail->next;
}

//Insert in middle

void insertAtPosition(Node* &head,Node* &tail,int pos,int d)
{

    if(pos==1)
    {
        insertionAtStart(head,d);
        return;
    }
    Node* nodeToInsert= new Node(d);
    Node* temp=head;
    int cnt=1;

    while(cnt < pos-1)
    {
        cnt++;
        temp= temp->next;
    }

    if(temp->next == NULL)
    {
        insertionAtEnd(tail,d);
        return;
    }

    //Now i have reached my desired node

    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void del(int pos,Node* &head)
{
    if(pos==1)
    {
        Node* temp= head;
        head=head->next;
        delete temp;
    }else{
        Node* curr=head;
        Node* prev= NULL;

        int cnt=1;
        while (cnt<=pos)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        //finally deleting that node or seeting that node free
        prev->next=curr->next;
        delete curr;
    }
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main()
{
    Node* newNode = new Node(100);
   // cout<<newNode->data<<endl;
   //cout<<newNode->next<<endl;

    //This would also work here newNode is not a pointer
    // Node newNode(10);
    // cout<<newNode.data;
    // cout<<newNode.next;

    Node* head = newNode;//Pointng the head to the newly created new Node
    Node* tail = newNode;//Pointer pointing to the end of linkedList
    print(head);
    insertionAtStart(head,45);
    print(head);
    insertionAtEnd(tail,75);
    print(head);
    insertAtPosition(head,tail,3,65);
    print(head);
    del(3,head);
    print(head);
    return 0;
}