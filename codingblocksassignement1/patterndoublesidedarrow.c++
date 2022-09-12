#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;std::cin>>n;
    int p=n;
    int spaceout=n-1;
    int spacein=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=spaceout;j++)
        {
            std::cout<<"  ";
        }
        int d=p-spaceout;
        int num=d/4+1;
        if(d>4)
            spacein=2*(d/4)-1;
        for(int j=num;j>=1;j--)
            std::cout<<j<<" ";
        for(int j=1;j<=spacein;j++)
            std::cout<<"  ";
        for(int j=1;j<=num and num>1;j++)
            std::cout<<j<<" ";
        if(i<n/2+1)
            spaceout-=2,p+=2;
        else
            spaceout+=2,p-=2; 
        std::cout<<"\n";
    }
}
