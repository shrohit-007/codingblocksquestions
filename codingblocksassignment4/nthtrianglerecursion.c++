#include<bits/stdc++.h>
using namespace std;
int calc(int n)
{
	if(n==0)
	{
		return 0;
	}
	return n+calc(n-1);
}
int main()
{
	int n;cin>>n;
	cout<<calc(n);
}
