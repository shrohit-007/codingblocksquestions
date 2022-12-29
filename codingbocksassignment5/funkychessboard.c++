#include<bits/stdc++.h>
using namespace std;
int ans=INT_MAX;
void f(vector<vector<int>>&v,int i,int j)
{
    int n=v.size();
    if(i<0 or j<0 or i>=v.size() or j>=v.size() or v[i][j]!=1 or v[i][j]==0)
    {
        return;
    }
    //cout<<i<<" "<<j<<endl;
    v[i][j]=2;
    if(i-1>=0 and j-2>=0)
    f(v,i-1,j-2);
    if(i+1<n and j-2>=0)
    f(v,i+1,j-2);
    if(i+2<n and j-1>=0)
    f(v,i+2,j-1);
    if(i+2<n and j+1<n)
    f(v,i+2,j+1);
    if(i+1<n and j+2<n)
    f(v,i+1,j+2);
    if(i-1>=0 and j+2<n)
    f(v,i-1,j+2);
    if(i-2>=0 and j+1<n)
    f(v,i-2,j+1);
    if(i-2>=0 and j-1>=0)
    f(v,i-2,j-1);
   // debug(v);
    int cnt=0;
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<n;l++)
        {
            if(v[k][l]==1)cnt++;
        }
    }v[i][j]=1;
    ans=min(ans,cnt);
}
int main()
{
	int n;cin>>n;
	vector<vector<int>>v(n,vector<int>(n,0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int a;cin>>a;
			v[i][j]=a;
		}
	}
	f(v,0,0);
	cout<<ans<<endl;
	
}
