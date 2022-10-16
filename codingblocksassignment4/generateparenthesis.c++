#include<bits/stdc++.h>
using namespace std;
void recu(int n,int i,string ans,int cnt1)
    {
        if(i==n)
        {
            if(cnt1==0)
            cout<<ans<<endl;
            return;
        }
        if(cnt1<0)
        {
            return;
        }
        recu(n,i+1,ans+')',cnt1-1);
		recu(n,i+1,ans+'(',cnt1+1);
    }
	int main()
	{
		int n;cin>>n;
		recu(2*n,0,"",0);
	}
