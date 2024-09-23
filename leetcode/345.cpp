#include <iostream>
using namespace std;
string reverseVowels(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        if((s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u')){
            cout<<"Inside 1"<<s<<endl;
            i++;
        }
        if((s[j] != 'a' || s[j] != 'e' || s[j] != 'i' || s[j] != 'o' || s[j] != 'u'))
        {
            cout<<"Inside 2"<<s<<endl;
            j--;
        }
        
        if((s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u') && (s[j]=='a' || s[j]=='e'|| s[j]=='i' || s[j]=='o' || s[j]=='u'))
            {
               swap(s[i],s[j]);
               i++;
               j--;
               cout<<s<<endl;
            }        
    }
    return s;
}
int main()
{
    string s="hello";
    reverseVowels(s);
    return 0;
}