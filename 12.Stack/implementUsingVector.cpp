#include<bits/stdc++.h>
using namespace std;
struct MyStack
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }
    bool isEmpty()
    {
        return v.empty();
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
};
int main()
{
    MyStack s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(40);
    s.pop();
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    s.pop();
    cout << s.peek() << endl;
    cout << s.size() << endl;
    return 0;
}
