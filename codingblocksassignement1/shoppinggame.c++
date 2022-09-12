#include<bits/stdc++.h>
int main() {
	int t;std::cin>>t;
    while(t--)
    {
        int n,m;std::cin>>n>>m;
        if(n==1 and m==2)
        {
            std::cout<<"Harshit\n";
            continue;
        }
        int x=std::sqrt(n);
        x=2*x-1;
        int y=(std::sqrt(4*m+1)-1)/2;
        y=2*y;
        if(y>x)
        std::cout<<"Harshit\n";
        else
        std::cout<<"Aayush\n";
    }
	return 0;
}
