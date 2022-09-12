#include<iostream>
int main() {
	int n,m;std::cin>>n>>m;
	int i=1;
	while(n>0)
	{
		if((3*i+2)%m!=0)
		std::cout<<(3*i+2)<<"\n",n--;
		i++;
	}
	
	return 0;
}
