#include<bits/stdc++.h>
using namespace std;
void f(stack<int>&st2,int ele)
{
	if(st2.empty())
	{
		st2.push(ele);
		return;
	}
	int x=st2.top();
	st2.pop();
	f(st2,ele);
	st2.push(x);
}
int main() {
	int n;cin>>n;
	stack<int>st1,st2;
	for(int i=0;i<n;i++)
	{
		// for rear values
		st1.push(i);
		// for front
		f(st2,st1.top());
	}
	while(!st2.empty())
	{
		cout<<st2.top()<<" ";
		st2.pop();
	}
	return 0;
}
