#include<bits/stdc++.h>
using namespace std;
    void generate(string &digits,int ind,string ans,vector<string>&v)
    {
        if(ind==digits.length())
        {
            cout<<ans<<endl;
			return;
        }
        int x=digits[ind]-'0';
        //cout<<x<<endl;
        for(int i=0;i<v[x].length();i++)
        {
            generate(digits,ind+1,ans+v[x][i],v);
        }
    }
int main() {
	string s;cin>>s;
	vector<string> v={ " ", ".+@$","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	generate(s,0,"",v);
	return 0;
}
