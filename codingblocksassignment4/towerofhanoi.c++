#include<bits/stdc++.h>
using namespace std;
void find_moves(int n, char src, char dest, char mid)
{
    if(n==0)
    {
		
        return;
    }
    find_moves(n-1,src,mid,dest);
	cout<<"Moving ring "<<n<<" from "<<src<<" to "<<dest<<endl;
    find_moves(n-1,mid,dest,src);
}
void solution()
{ 
    int n;cin>>n;
	find_moves(n,'A','B','C');
 
}
int main()
{
	solution();
}
