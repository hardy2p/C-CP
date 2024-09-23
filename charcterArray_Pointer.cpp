#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,4};
    char ch[6]="abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;//This will print the whole array it will not print the address.

    //Now with pointer
    char *p=&ch[0];
    cout<<p<<endl;
    //This will not print the first element of the array it will print the whole array.
    //Cout function is differnetly implememted for both integer array and cahracter array


    char temp='z';
    char *c=&temp;
    cout<<*c<<endl;
    cout<<c<<endl;
    /*
    In character array when we print via the address method it will keep printing the
    elements untill it founds the NULL character of the array.
    Same works with the &ch[0] printing method 

    */

   char *ptr;
   char str="abcdefg";
   ptr = str;
   ptr+=5;
   cout<<ptr<<endl;
    return 0;
}