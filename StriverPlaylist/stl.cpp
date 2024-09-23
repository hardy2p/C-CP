#include <bits/stdc++.h>
using namespace std;

void pairPart()
{
    // Declaration and intilization of pair
    pair<int, int> p;
    p = {1, 2};

    // Accssing the pair first and second element
    cout << "First: " << p.first << " Second: " << p.second << endl;
    ;

    // Nested pair
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << endl;
    // Accesing the nested pair elements
    cout << p1.second.first << endl;
    cout << p1.second.second << endl;

    // Array of pair can also be created

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Array of pair part\n";
    for (auto num : arr)
    {
        cout << num.first << endl;
        cout << num.second << endl;
    }
}

void vectorPart()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};

    // auto keyword detects that i is an vector iterator "std::vector<int>::iterator"
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        cout << *i << endl;
    }

    cout << "Max size " << nums.max_size() << endl;
    cout << "Capacity " << nums.capacity() << endl;
    reverse(nums.begin(), nums.end());
    for (auto num : nums)
        cout << num << endl;

    vector<int>::iterator it = nums.begin();
    cout << *(it) << endl;

    // I can also use auto in place of the vector<int>::iterator
    auto temp = --nums.end();
    cout << *(temp) << endl;

    cout << "Final" << endl;
    vector<int> v(2, 100);
    v.insert(v.begin() + 1, 50);
    for (auto i : v)
        cout << i << endl;

    vector<int> h(nums);
    for (auto i : h)
        cout << i << endl;

    cout << nums.front() << endl;
}

void listPart()
{
    list<int> l = {1, 2, 3};
    for (auto i : l)
        cout << i << endl;
    cout << l.size() << endl;
    cout << l.front() << endl;
    cout << l.back() << endl;

    // insertion in list

    l.insert(l.begin(), 100);
    list<int>::iterator it = l.begin();
    cout << *(it) << endl;

    // insertion using push_front
    l.push_front(4);
    cout << l.front() << endl;
}

void stackPart()
{
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    while (st.size() > 0)
    {
        cout << st.top() << endl;
        st.pop();
    }
}

void queuePart()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.front() << endl;
    q.emplace(5);
    cout << q.size() << endl;

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}

void priorityQueue()
{
    priority_queue<int> pq;
    pq.push(4);
    pq.push(8);
    pq.push(7);
    pq.emplace(1);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top();

    // size empty swap function are same

    // The above used priority queue is maximum priority queue
    // we will learn minimum priority queue
    // minimum priority queue:-

    priority_queue<int, vector<int>, greater<int>> qp;
    qp.push(1);
    qp.push(2);
    qp.push(3);
    qp.push(4);
    cout << qp.top() << endl;
}

void setPart()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.emplace(5);

    // iterating over the set
    for (auto i : s)
        cout << i << endl;

    // print using iterators
    cout << "Iterator print" << endl;
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << endl;
    }

    cout << "Printing  reverse using iterator" << endl;
    for (auto i = s.end(); i != s.begin(); i--)
    {
        cout << *i << endl;
    }

    auto it = s.begin();
    cout << "Enter the word you want to search\n"
         << endl;
    int k;
    cin >> k;
    if (s.find(k) != s.end())
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not found\n";
    }

    if (s.count(4))
        cout << "Found 4\n";

    // erase elemets from the set
    s.erase(s.begin());
    for (auto i : s)
        cout << i << endl;
}

void multiSetPart()
{
    multiset<int> ms;
    // sorted but not unique
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    for (auto i : ms)
        cout << i << endl;
    cout << ms.count(1) << endl; // Here count doest return 0 or 1 here it returns no of elements presernt in that set that are passed in the count function

    // erase function also behave certainly different here
    cout << "After erasing\n";
    ms.erase(ms.begin()); // will erase first element of multiset
    for (auto i : ms)
        cout << i << endl;
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.erase(2); // it will erase all the occuracnce of 2
    for (auto i : ms)
        cout << i << endl;

    // rest all funciton are same
}

void mapPart()
{
    map<int, string> m;
    m[1] = "Rahul";
    m[2] = "Rohit";
    m[3] = "Ranu";
    m[4] = "Rti";

    // for(auto i: m){
    //     cout<<i.first<<" -> "<<i.second<<endl;
    // }

    for (auto i = m.begin();i != m.end(); i++)
    {
        cout << i->first << " -> " << i->second << endl;
    }
}


void extra()
{
    vector<int> nums={1,2,5,3,10,7,5};
    int n= nums.size();
    for(auto num : nums) cout<<num<<' ';
    cout<<endl;

    cout<<"After sorting\n";
    sort(nums.begin(),nums.end());
    for(auto num : nums) cout<<num<<' ';

    cout<<"Sorting in descending order\n";
    sort(nums.begin(),nums.end(),greater<int>());
    for(auto num : nums) cout<<num<<' ';

    cout<<"Another way of sorting can also be\n";
    sort(nums.rbegin(),nums.rend());
    for(auto num : nums) cout<<num<<' ';
    
}
int main()
{
    extra();
    return 0;
}