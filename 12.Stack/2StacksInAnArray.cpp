#include <bits/stdc++.h>
using namespace std;
class TwoStacks
{
    int *arr, cap, top1, top2;
    public:
    TwoStacks(int n)
    {
        cap = n;
        top1 = -1;
        top2 = cap;
        arr = new int[n];
    }
    void push1(int a)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = a;
        }
        else
        {
            cout << "Stack Overflow";
            exit(1);
        }
    }
    void push2(int b)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = b;
        }
        else
        {
            cout << "Stack Overflow";
            exit(1);
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        else
        {
            cout << "Stack UnderFlow";
            exit(1);
        }
    }
    int pop2()
    {
        if (top2 < cap)
        {
            int y = arr[top2];
            top2++;
            return y;
        }
        else
        {
            cout << "Stack UnderFlow";
            exit(1);
        }
    }
    int size1()
    {
        return top1 + 1;
    }
};
int main()
{
    TwoStacks a(3);
    a.push1(2);
    a.push1(12);
    a.push2(3);
    cout << a.pop1() << " ";
    cout << a.pop2() << " ";
    cout << a.pop1() << " ";
    return 0;
}
