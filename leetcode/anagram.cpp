#include<iostream>
#include<vector>
using namespace std;


void isAnagram(string s, string t) {
        vector<int> arr1(26,0);
        vector<int> arr2(26,0);

        for(int i=0;i<s.length();i++)
        {
            int index=s[i]-'a';
            arr1[index]++;
        }

        for(int i=0;i<t.length();i++)
        {
            int index=t[i]-'a';
            arr2[index++];
        }
        for(int i=0;i<26;i++)
        {
            cout<<"arr1 at "<<i<<" pos is "<<arr1[i]<<endl;
            cout<<"arr2 at "<<i<<" pos is "<<arr2[i]<<endl;
        }
    }

int main()
{
    string s="anagram";
    string t="nagaram";
    isAnagram(s,t);
    return 0;
}