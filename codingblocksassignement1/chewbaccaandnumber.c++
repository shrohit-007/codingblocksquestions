#include<iostream>
int main() {
	std::string s;std::cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			if('9'-s[i]!=0)
		{
			if('9'-s[i]<(s[i]-'0'))
			{
				s[i]='9'-s[i]+'0';
			}
		}
		}
		else
			if('9'-s[i]<(s[i]-'0'))
			{
				s[i]='9'-s[i]+'0';
			}
	}
	std::cout<<s<<"\n";
	return 0;
}
