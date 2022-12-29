#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int c=0;
		int f=0;
		for(int i=0;i<n;i++)
		{
			int a;cin>>a;
			if(a==1)c++;
			else c--;
			if(c<0)
			{
				f=1;
			}
		}
		if(f)
		cout<<"Invalid"<<endl;
		else cout<<"Valid"<<endl;
	}
	return 0;
}
