#include<iostream>
using namespace std;

int stack[100],n=100,top=-1;
void push(int val)
{
    if(top>=n-1){
        cout<<"Stack overflow"<<endl;
    }else{
        top++;
        stack[top]=val;
    }
}

void pop(){
    if(top<=-1)
    {
        cout<<"Stack Underflow"<<endl;
    }else{
        cout<<"The popped element is "<<stack[top]<<endl;
        top--;
    }
}

void display(){
    if(top>=0){
        cout<<"Stacks elements are:";
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
    }else{
        cout<<"Stack is empty"<<endl;
    }
}

int main()
{
    int ch,val;
    cout<<"Press 1 to push in the array"<<endl;
    cout<<"Press 2 to pop in the array"<<endl;
    cout<<"Press 3 to peak in the array"<<endl;
    cout<<"Press 4 to exit in the array"<<endl;

    do{
        cin>>ch;
        switch (ch)
        {
        case 1:
            cin>>val;
            push(val);
            cout<<"Again press 1,2,3,4 "<<endl;
            break;
        case 2:
            pop();
            cout<<"Again press 1,2,3,4 "<<endl;
            break;
        case 3:
            display();
            cout<<"Again press 1,2,3,4 "<<endl;1

            break;
        case 4:
            cout<<"Exit"<<endl;
            break;
        default:
            cout<<"Invalid entry"<<endl;
            break;
        }
    }while(ch!=4);
    return 0;
}