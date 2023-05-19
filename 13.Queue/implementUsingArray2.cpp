#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int *arr;
    int size, front, cap;
    Queue(int a)
    {
        cap = a;
        size = 0;
        front = 0;
        arr = new int[cap];
    }
    void enqueue(int a)
    {
        if(isFull())
            return;
        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = a;
        size++;
    }
    void dequeue()
    {
        if(isEmpty())
            return;
        front = (front + 1) % cap;
        size--;
    }
    bool isFull()
    {
        return (size == cap);
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    int getFront()
    {
        if(isEmpty())
            return -1;
        return front;
    }
    int getRear()
    {
        if(isEmpty())
            return -1;
        return (front + size - 1) % cap;
    }
};
