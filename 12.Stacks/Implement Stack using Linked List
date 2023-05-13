#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
struct MyStack
{
    int x;
    Node *head;
    int cap;
    MyStack()
    {
        head = NULL;
        cap = 0;
    }
    void push(int x)
    {
        Node *temp = new Node(x);
        temp -> next = head;
        head = temp;
        cap++;
    }
    int pop()
    {
        if (head == NULL)
            return INT_MAX;
        cap--;
        Node *temp = head;
        int res = temp->data;
        head = head->next;
        delete temp;
        return res;  
    }
    bool isEmpty()
    {
        return(head == NULL);
    }
    int size()
    {
        return cap;
    }
    int peek()
    {
        if (head == NULL)
            return INT_MIN;
        return head->data;
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
