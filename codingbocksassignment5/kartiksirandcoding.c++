#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;cin>>n;
	stack<int>st;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		if(x==2)
		{
			int a;cin>>a;
			st.push(a);
		}
		else
		{
			if(!st.empty())
			{
				cout<<st.top()<<endl;
				st.pop();
			}
			else
			cout<<"No Code"<<endl;
		
		}
	}
	return 0;
}
