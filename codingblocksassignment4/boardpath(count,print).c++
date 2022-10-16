#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void generate(int n,int m,string ans,int sum)
{
	if(sum>=n)
	{
		if(sum==n)
		{
			cout<<ans<<" ";
			cnt++;
		}
		return;
	}
	for(int j=1;j<=m;j++)
	{
		generate(n,m,ans+char(j+'0'),sum+j);
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	generate(n,m,"",0);
	cout<<endl<<cnt<<endl;
}
