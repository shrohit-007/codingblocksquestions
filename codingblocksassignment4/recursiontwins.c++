#include<bits/stdc++.h>
using namespace std;
int twins(string s,int n)
{
	if(n==2)
	{
		return 0;
	}
	int c=0;
	if(s[n-1]==s[n-3])
	c++;
	return c+twins(s,n-1);
}
int main()
{
	string s;cin>>s;
	int n=s.length();
	if(n<=2)
	{
		cout<<"0"<<endl;
	}
	else
	cout<<twins(s,n);
}
