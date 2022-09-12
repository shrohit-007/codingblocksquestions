#include<iostream>
int main() {
	int n;std::cin>>n;
	while(n--)
	{
		int sumo=0,sume=0;
		int x;std::cin>>x;
		while(x>0)
		{
			int rem=x%10;
			if(rem&1)
			sumo+=rem;
			else
			sume+=rem;
			x/=10;
		}
		if(sumo%3==0 or sume%4==0)
		std::cout<<"Yes"<<"\n";
		else
		std::cout<<"No\n";
	}
	return 0;
}
