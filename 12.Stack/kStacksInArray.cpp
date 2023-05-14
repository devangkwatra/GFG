#include <bits/stdc++.h>
using namespace std;
struct kStacks
{
    int *arr, *next, *top;
    int k, freeTop, cap;
    kStacks(int k1, int n)
    {
        k = k1, cap = n;
        arr = new int[cap];
        top = new int[k];
        next = new int[cap];
        for (int i = 0; i < k; i++)
            top[i] == -1;
        freeTop = 0;
        for (int i = 0; i < cap - 1; i++)
            next[i] = i + 1;
        next[cap - 1] = -1;
    }
    void push(int x, int sn)
    {
        int i = freeTop;
        freeTop = next[i];
        next[i] = top[sn];
        top[sn] = i;
        arr[i] = x;
    }
    int pop(int sn)
    {
        int i = top[sn];
        top[sn] = next[i];
        next[i] = freeTop;
        freeTop = i;
        return arr[i];
    }
};
int main()
{
    kStacks a(3, 10);
    a.push(15111, 0);
    a.push(1511, 0);
    a.push(151, 0);
    a.push(45, 2);
    a.push(100, 2);
    a.push(1002, 1);
    a.push(1004, 1);
    a.push(1005, 1);
    cout << a.pop(1) << " ";
    cout << a.pop(0) << " ";
    cout << a.pop(2) << " ";
    return 0;
}
