#include<iostream>
bool checkprime(int a)
{
	if(a==1)
	return false;
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0)
		return false;
	}
	return true;
}
int main() {
	int n;std::cin>>n;
	bool ok=checkprime(n);
	if(ok)
	std::cout<<"Prime\n";
	else
	std::cout<<"Not Prime\n";
	return 0;
}
