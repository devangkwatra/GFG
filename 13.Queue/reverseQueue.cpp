#include<bits/stdc++.h>
using namespace std;
void revIterative(queue<int> &q)
{
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}
void revRecursive(queue<int> &q)
{
    if(q.empty())
        return;
    int x = q.front();
    q.pop();
    revRecursive(q);
    q.push(x);
}
void print(queue <int> &q)
{
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    revIterative(q);
    print(q);
    q.push(100);
    q.push(200);
    q.push(300);
    revRecursive(q);
    print(q);
}
