#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
    while(t--)
    {
        int c1,c2,c3,c4;cin>>c1>>c2>>c3>>c4;
        int n,m;cin>>n>>m;
        vector<int>rikshaw(n),cabs(m);
        for(int i=0;i<n;i++)
        cin>>rikshaw[i];
        for(int i=0;i<m;i++)
        cin>>cabs[i];
        int cb=0;
        int rsh=0;
        for(int i=0;i<n;i++)
        {
            rsh+=min(c1*rikshaw[i],c2);
        }
        rsh=min(rsh,c3);
        for(int i=0;i<m;i++)
        {
            cb+=min(c1*cabs[i],c2);
        }
        cb=min(cb,c3);
        cout<<min(cb+rsh,c4)<<"\n";
    }
	return 0;
}
