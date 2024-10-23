#include<bits/stdc++.h>
using namespace std;
void printFib(int n){
    int a =0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        int next=a+b;
        a=b;
        b=next;
        cout<<next<<" ";
    }
    cout<<endl;
}
//fibbonachi triangle
void fibTriangle(int n){
    for(int i=1;i<=n;i++){
        printFib(i);
    }
}

bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int avgCal(int a ,int b){
    return a+(b-a)/2;
}

int maxNum(int a,int b,int c){
    return max(a,max(b,c));
}

void reverseString(string &str){
    int n=str.size();
    int i=0;
    int j=n-1;
    while(i<j){
        swap(str[i++],str[j--]);
    }
}

bool checkPallindrom(int n){
    // string s=to_string(n);
    // string revStr=s;
    // reverse(s.begin(),s.end());
    // return s==revStr;

    int revNum=0;
    int temp=n;
    while(temp != 0){
        revNum=revNum*10 + (temp%10);
        temp/=10;
    }
    return revNum==n;
}

void swapNum(int &a,int &b){
    // a=a+b;
    // b=a-b;
    // a=a-b;
    a=a^b;
    b=a^b;
    a=a^b;
}

int gcd(int m ,int n){
    while(m != n){
        if(m>n){
            m=m-n;
        }else{
            n=n-m;
        }
    }
    return m;
}

int gcdEuclid(int a , int b){
    if(b==0) return a;
    return gcdEuclid(b,a%b);
}

int lcm(int a,int b){
    return (a*b)/gcdEuclid(a,b);
}

int digitSum(int n){
    int ans=0;
    while(n!=0){
        ans+=n%10;
        ans/=10;
    }
    return ans;
}

vector<int> rotateArray(vector<int> &nums,int k){
    vector<int> ans(nums.size(),0);
    for(int i=0;i<nums.size();i++){
        ans[i]=nums[(i+k)%nums.size()];
    }
    return ans;
}

int medianOfArray(vector<int> nums){
    int n=nums.size();
    if(n%2 == 1){
        return nums[n/2];
    }
    return nums[(n/2)-1];
}

int removeDuplicate(vector<int> &nums){
    int i=0;
    int j=1;
    for(int j=1;j<nums.size();j++){
        if(nums[j] != nums[i]){
            i=i+1;
            nums[i]=nums[j];
            
        }
    }
    return i+1;
}
int eqIndex(vector<int> nums){
    int n= nums.size();
    for(int i=0;i<n;i++)
    {
        int lSum=0;
        for(int j=0;j<i;j++){
            lSum+=nums[j];
        }
        int rSum=0;
        for(int j=i+1;j<n;j++){
            rSum+=nums[j];
        }

        if(lSum==rSum) return i;
    }
    return -1;
}

int eqIndexOptimized(vector<int> nums){
    int totalSum=accumulate(nums.begin(),nums.end(),0);
    int lSum=0;
    int rSum=totalSum;
    for(int i=0;i<nums.size();i++){
        rSum -= nums[i];
        if(lSum == rSum) return i;
        lSum+=nums[i];
    }
    return -1;
}

string reverseSentence(string str){
    stack<string> st;
    str+=" ";
    string s="";
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            st.push(s);
            s="";
        }else{
            s+=str[i];
        }
    }
    string ans ="";
    while( !st.empty()){
        ans += st.top();
        st.pop();
        if (!st.empty()) {
            ans += " ";  // Add a space between words
        }
    }
    return ans;
}
int main()
{
    vector<int> nums={1,2,3,4,5};
    nums=rotateArray(nums,2);
    for(auto num:nums){
        cout<<num<<" ";
    }
    return 0;
}