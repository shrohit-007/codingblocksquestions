#include<bits/stdc++.h>
int main() {
	int mn,mx;std::cin>>mn>>mx;
    int step;std::cin>>step;
    while(mn<=mx)
    {
        std::cout<<mn<<" "<<((mn-32)*5)/9<<"\n";
        mn+=step;
    }
	return 0;
}
