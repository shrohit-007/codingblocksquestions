#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void generate(int n,int m,int i,int j,string ans)
{
	if(i>=n and j>=m)
	{
		cnt++;
		cout<<ans<<" ";
		return;
	}
	if(i<n)
	generate(n,m,i+1,j,ans+'V');
	if(j<m)
	generate(n,m,i,j+1,ans+'H');
}
int main()
{
	int n,m;cin>>n>>m;
	generate(n,m,1,1,"");
	cout<<"\n"<<cnt<<endl;
}
