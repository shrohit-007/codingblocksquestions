#include<bits/stdc++.h>
using namespace std;
int f=0;
void display(vector<vector<int>>&ans)
{
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[0].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}cout<<endl;
	}
}
void generate(int n,int m,vector<vector<int>>&ans,vector<vector<char>>&v,int i,int j)
{
	if(i==n-1 and j==m-1)
	{
		ans[i][j]=1;
		display(ans);
		f=1;
		return;
	}
	if(i<0  or j<0 or i>=n or j>=m  or v[i][j]=='X' )
    {
        return ;
    }
    v[i][j]='X';
	ans[i][j]=1;
    generate(n,m,ans,v,i,j-1);
    generate(n,m,ans,v,i,j+1);
    generate(n,m,ans,v,i-1,j);
    generate(n,m,ans,v,i+1,j);
    v[i][j]='O';
	ans[i][j]=0;
}
int main()
{
	int n,m;cin>>n>>m;
	vector<vector<char>>v;
	for(int i=0;i<n;i++)
	{
		string s;cin>>s;
		vector<char>temp;
		for(int j=0;j<m;j++)
		{
			temp.push_back(s[j]);
		}
		v.push_back(temp);
	}
	vector<vector<int>>ans(n,vector<int>(m,0));
	generate(n,m,ans,v,0,0);
	if(!f)
	{
		cout<<"NO PATH FOUND"<<endl;
	}
}
