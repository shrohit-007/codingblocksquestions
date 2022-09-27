#include<bits/stdc++.h>
using namespace std;
void odd(int x)
{
	if(x<=0)
	return;
	cout<<x<<endl;
	odd(x-2);
}
void even(int x,int i)
{
	if(i>x)
	{
		return;
	}
	cout<<i<<endl;
	even(x,i+2);
}
int main() {
	int n;cin>>n;
	if(n&1)
	{
		odd(n);
		even(n-1,2);
	}
	else
	{
		odd(n-1);
		even(n,2);
	}
	return 0;
}
