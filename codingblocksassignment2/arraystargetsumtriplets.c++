#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
    vector<int>v;
    map<int,int>m,m1;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.emplace_back(a);
        m[a]++;
    }
    int x;cin>>x;
    std::sort(v.begin(),v.end());
    set<pair<int,pair<int,int>>>s;
    m1=m;
    for(int i=0;i<n;i++)
    {
        m=m1;
        for(int j=i+1;j<n;j++)
        {
            m[v[i]]--;
            m[v[j]]--;
            auto it=m.find(x-v[i]-v[j]);
            if(it!=m.end())
            {
                int times=it->second;
                vector<int>tmp;
                tmp.emplace_back(v[i]);
                tmp.emplace_back(v[j]);
                tmp.emplace_back(x-v[i]-v[j]);
                sort(tmp.begin(),tmp.end());
                for(int k=0;k<times;k++)
                {
                    s.insert({tmp[0],{tmp[1],tmp[2]}});
                }
            }
        }
    }
    for(auto &it:s)
        cout<<it.first<<", "<<it.second.first<<" and "<<it.second.second<<"\n";
}
