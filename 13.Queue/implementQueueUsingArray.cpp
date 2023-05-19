#include<bits/stdc++.h>
using namespace std;
struct MyQueue
{
    int cap, size;
    int* arr;
    int f, r;
    MyQueue(int x)
    {
        size = 0;
        cap = x;
        arr = new int[cap];
    }
    void dequeue()
    {
        if(isEmpty())
            return;
        for(int i = 0; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }
    void enqueue(int a)
    {
        if (isFull())
            return;
        arr[size] = a;
        size++;
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    bool isFull()
    {
        return (size == cap);
    }
    int getRear()
    {
        return arr[r];
    }
    int getFront()
    {
        return arr[f];
    }
};
int main()
{
    MyQueue q(10);
    return 0;
}
