#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;cin>>n;
	stack<pair<int,int>>s;
	for(int i=0;i<n;i++)
	{
		int price;cin>>price;
		int cnt=0;
        while(!s.empty() and s.top().first<=price)
        {
            int c=s.top().second;
            cnt+=c;
            s.pop();
        }
        cnt++;
        s.push({price,cnt});
		cout<<cnt<<" ";
	}cout<<"END";
	return 0;
}
