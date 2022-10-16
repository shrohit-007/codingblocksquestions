#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void generate(int n,int i,int j,string ans)
{
	if(i>=n-1 and j>=n-1)
	{
		if(i==n-1 and j==n-1)
		{
			cnt++;
			cout<<ans<<" ";
		}
		return;
	}
	//knight
	if(i+2<n and j+1<n)
	{	
		generate(n,i+2,j+1,ans+"K{"+char(i+2+'0')+"-"+char(j+1+'0')+"}");
	}
	if(i+1<n and j+2<n)
	{
		generate(n,i+1,j+2,ans+"K{"+char(i+1+'0')+"-"+char(j+2+'0')+"}");
	}
	//rook
	if(i==0 or j==0 or i==n-1 or j==n-1)
	{
		if(j!=n-1)
		{
			for(int k=j+1;k<=n-1;k++)
			{
				generate(n,i,k,ans+"R{"+char(i+'0')+"-"+char(k+'0')+"}");
			}
		}
		if(i!=n-1)
		{
			for(int k=i+1;k<=n-1;k++)
			{
				generate(n,k,j,ans+"R{"+char(k+'0')+"-"+char(j+'0')+"}");
			}
		}
	}
	//Bishop
	if(i+j==n-1 or i==j)
	{
		for(int k=i+1,l=j+1;k<n,l<n;k++,l++)
		{
			generate(n,k,l,ans+"B{"+char(k+'0')+"-"+char(l+'0')+"}");
		}
	}

}
int main()
{
	int n;cin>>n;
	generate(n,0,0,"{0-0}");
	cout<<endl<<cnt<<endl;
}
