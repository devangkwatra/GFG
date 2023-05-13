#include<iostream>
#include <limits.h>
using namespace std;
struct MyStack
{
    int *arr;
    int cap;
    int top;
    MyStack(int c)
    {
        cap = c;
        top = -1;
        arr=new int[cap];
    }
    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "Overflow\n";
            return;
        }
            
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Underflow\n";
            return INT_MAX;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek()
    {
        return arr[top];
    }
    int size()
    {
        return top+1;
    }
    bool isEmpty()
    {
        return(top == -1);
    }
};
int main()
{
    MyStack s(4);
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(40);
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    s.pop();
    cout << s.peek() << endl;
    cout << s.size() << endl;
    return 0;
}
