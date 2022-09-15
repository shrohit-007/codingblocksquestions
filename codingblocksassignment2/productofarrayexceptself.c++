#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    
    int n;cin>>n;
    std::vector<ll>v,pf(n+3,1),pf1(n+3,1);
    for(int i=0;i<n;i++)
    {
        ll a;std::cin>>a;
        v.emplace_back(a);
    }
    for(int i=0;i<n;i++)
    {
        pf[i+1]=v[i]*pf[i];
    }
    //debug(pf);
    for(int i=n;i>=1;i--)
    {
        pf1[i]=pf1[i+1]*v[i-1];
    }
    //debug(pf1);
    for(int i=1;i<=n;i++)
    {
        std::cout<<pf[i-1]*pf1[i+1]<<" ";
    }
    std::cout<<"\n";
}
