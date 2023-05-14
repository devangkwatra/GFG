#include <bits/stdc++.h>
using namespace std;
void stockSpan(vector<int> &n)
{
    stack<int> s;
    s.push(0);
    cout << "1 ";
    for(int i = 1; i < n.size(); i++)
    {
        while(!s.empty() and n[s.top()] <= n[i])
            s.pop();
        int span;
        if (s.empty())
            span = i + 1;
        else
            span = i - s.top();
        cout << span << " ";
        s.push(i);
    }
}
int main()
{
    vector<int> n{20, 30, 12, 34, 50};
    stockSpan(n);
    return 0;
}
