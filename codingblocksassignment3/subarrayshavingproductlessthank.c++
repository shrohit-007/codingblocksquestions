#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n,k;cin>>n>>k;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll a;cin>>a;
        v.push_back(a);
    }
    ll p=1;
    int i=0,j=0;
    ll ans=0;
    while(i<n)
    {
        p*=v[i];
        while(p>=k and j<=i)
        {
            p/=v[j];
            j++;
        }
        ans+=i-j+1;
        i++;
    }
    cout<<ans<<endl;
}
