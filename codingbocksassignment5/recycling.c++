#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    v.push_back(-1);
    int ans=0;
    stack<int>st;
    for(int i=0;i<=n;i++)
    {
        while(!st.empty() and v[i]<v[st.top()])
        {
            int r=i;
            int h=v[st.top()];st.pop();
            if(st.empty())
            {
                ans=max(ans,h*r);
            }
            else
            {
                int l=st.top();
                ans=max(ans,h*(r-l-1));
            }
        }
        st.push(i);
    }
    cout<<ans<<endl;
}
