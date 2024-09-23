#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Creating a node

class Node{
    public:
    int data;
    Node* next;
};

int main()
{
    Node* head;
    Node* one=NULL;
    Node* two=NULL;
    Node* three=NULL;

    //Allocate 3 nodes in the heap

    one=new Node();
    two=new Node();
    three= new Node();

    //Assing values

    one->data=1;
    two->data=2;
    three->data=3;

    //Connecting the nodes

    one->next=two;
    two->next=three;
    three->next=NULL;


    head=one;

    while(head != NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}