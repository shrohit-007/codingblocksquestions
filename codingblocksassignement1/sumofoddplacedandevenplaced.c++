#include<iostream>
int main() {
	int i=1;
	int n;std::cin>>n;
	int sume=0,sumo=0;
	while(n>0)
	{
		if(i&1)
		sumo+=n%10;
		else 
		sume+=n%10;
		i++;
		n/=10;
	}
	std::cout<<sumo<<"\n"<<sume;
	return 0;
}
