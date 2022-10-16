#include<bits/stdc++.h>
using namespace std;
void generate(int curr,int n,vector<int>&ans)
    {
        if(curr>n)
        {
            return;
        }
        if(curr!=0)
        ans.push_back(curr);
        int i=0;
        if(curr==0)
        {
            i=1;
        }
        for(;i<=9;i++)
        {
            generate(curr*10+i,n,ans);
        }
    }
int main()
{
	int n;cin>>n;
	vector<int>v;
	generate(0,n,v);
	cout<<0<<" ";
	for(auto &it:v)
	cout<<it<<" ";
}
