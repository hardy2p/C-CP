#include<iostream>
using namespace std;

int main(){
    //Dynamic memory allocation of the 2d array

    int n;
    cin>>n;
    int** arr=new int*[n];
    //Making a double pointer arrya for storing a pointer in its each element.
    //we have made a double pointer in the stack memory which is getting the address from the OR which is pointing to the pointer int the heap memory of the array. 
    //Heap memory elements are the pointer which these pointer is pointing

    //Creation of the array
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        //Now for each pointer that we have stored we are allocating it a dynamic memory in heap too.
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


    //Now for if row and column are different
    int row,col;
    cin>>row>>col;
    int** newArr= new int*[row];//Total rows made
    for(int i=0;i<row;i++){
        newArr[i]=new int[col];//Assing a one d array to each row
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>newArr[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<newArr[i][j]<<" ";
        }
        cout<<"\n";
    }


    //Deletion from the heap memory

    for(int i=0;i<n;i++){
        delete arr[i];
    }

    for(int i=0;i<row;i++){
        delete newArr[i];
    }

    

    

    return 0;
}