#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;cin>>s>>t;
    int n=s.length();
    int cn=0;
    map<char,int>m;
    for(int i=0;i<t.length();i++)
    {
        if(m[t[i]]==0)
        cn++;
        m[t[i]]++;
    }
    int i=0,j=0,st=0;
    int ans=INT_MAX;
    while(j<n)
    {
        m[s[j]]--;
        if(m[s[j]]==0)
        cn--;
        if(cn==0)
        {
            while(cn==0)
            {
                if(ans>j-i+1)
                {
                    ans=min(ans,j-i+1);
                    st=i;
                }
                m[s[i]]++;
                if(m[s[i]]>0)
                {
                    cn++;
                }
                i++;
            }
        }j++;
    }
    if(ans!=INT_MAX)
    {
        cout<<s.substr(st,ans);
    }
}
