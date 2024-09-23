#include<iostream>
using namespace std;
//Templates in c++
//https://www.geeksforgeeks.org/templates-cpp/

 template<typename T>
    T myMax(T x,T y){
        return (x>y)?x:y;
    }    


int main(){
    //Templates are just like macro they also run before compile time
    //One function can be used for diffrernt datatypes
    
    cout<<myMax<int>(4,7)<<endl;
    cout<<myMax<char>('a','z')<<endl;
    return 0;
}