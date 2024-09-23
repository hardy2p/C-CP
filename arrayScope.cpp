#include<iostream>
using namespace std;

void update(int arr[],int size){
    cout<<"Inside the function"<<endl;
    //Main updation
    arr[0]=45;
    //Now this change will reflect back into main function too beacause when we called the function update in the main fucntion as update(arr,3) we passed the starting address of the array not the whole 3 blocks of the array that is why this chamge is shown back in main function tooo.This is known as pass by refrence .
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[3]={1,2,3};
    update(arr,3);
    cout<<"Outside the function "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}