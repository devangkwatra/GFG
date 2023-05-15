#include<bits/stdc++.h>
using namespace std;

void prevGreater(vector<int> &v)
{
    if (v.size() == 0)
        return;
    stack<int> s;
    for(int i = 0; i < v.size(); i++)
    {
        while(!s.empty() and v[i] >= s.top())
            s.pop();
        int ans;
        if (s.empty())
            ans = -1;
        else
            ans = s.top();
        cout << ans << " ";
        s.push(v[i]);
    }
}
int main()
{
    vector<int> v {15,10,18,12,13,6,19,0};
    prevGreater(v);
    return 0;
}
